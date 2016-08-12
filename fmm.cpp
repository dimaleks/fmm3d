#include <cassert>
#include <cstring>
#include <immintrin.h>
#include <vector>
#include <cmath>
#include <omp.h>

#include "fmm.h"
#include "e2p.h"
#include "p2p.h"
#include "l2p.h"
#include "treehelper.h"

#define LMAX 21

FMM3D::FMM3D(double theta, int leafCapacity, int neighsProximity) :
theta2(theta*theta), tree(leafCapacity, neighsProximity), ne2p(0), np2p(0)
{
	std::fill(zeros, zeros + EXPSIZE, 0);
}

template<typename T>
void flush(T& v)
{
	v = 0;
}
template<typename T, typename... Args>
void flush(T& v, Args&... args)
{
	v = 0;
	flush(args...);
}

// ISPC cannot overload exported functions, sad
// ********************************************
inline void p2pWrapper(const double * xsrc, const double * ysrc, const double * zsrc, const double * qsrc, const int32_t nsrc,
					   const double xdst, const double ydst, const double zdst, double &pot)
{
	ispc::p2p(xsrc, ysrc, zsrc, qsrc, nsrc, xdst, ydst, zdst, pot);
}

inline void p2pWrapper(const double * xsrc, const double * ysrc, const double * zsrc, const double * qsrc, const int32_t nsrc,
					   const double xdst, const double ydst, const double zdst, double &fx, double &fy, double &fz)
{
	ispc::p2pForce(xsrc, ysrc, zsrc, qsrc, nsrc, xdst, ydst, zdst, fx, fy, fz);
}

inline void e2pWrapper(const double * xrel, const double * yrel, const double * zrel, const int32_t nexps, const double * exps, double &pot)
{
	ispc::e2p(xrel, yrel, zrel, nexps, exps, pot);
}

inline void e2pWrapper(const double * xrel, const double * yrel, const double * zrel, const int32_t nexps, const double * exps, double &fx, double &fy, double &fz)
{
	ispc::e2pForce(xrel, yrel, zrel, nexps, exps, fx, fy, fz);
}
// ********************************************

template<typename... Args>
void FMM3D::evaluateLog(const double xt,
						const double yt,
						const double zt,
						Args&... args)
{
	const int nchildren = 8;
	
	int stack[LMAX * 8];
	double xrels alignas(32) [evalBufSize], yrels alignas(32) [evalBufSize];
	double zrels alignas(32) [evalBufSize], qs    alignas(32) [evalBufSize];
	const double *exps[evalBufSize];
	double trExps alignas(32) [EXPSIZE*evalBufSize];
	
	int bufcount = 0;
	int stackentry = 0, maxentry = 0;
	stack[0] = 0;
	flush(args...);
	
	while(stackentry > -1)
	{
		const int nodeid = stack[stackentry--];
		auto node = tree.nodes.ptr() + nodeid;
		
		assert(nodeid < node->child_id || node->child_id == 0);
		
		const double xr = xt - node->xcom;
		const double yr = yt - node->ycom;
		const double zr = zt - node->zcom;
		const double r2 = xr*xr + yr*yr + zr*zr;
		
		if (node->r * node->r < theta2 * r2)
		{
			xrels[bufcount] = xr;
			yrels[bufcount] = yr;
			zrels[bufcount] = zr;
			qs[bufcount] = node->Q;
			exps[bufcount] = tree.expansions.ptr() + EXPSIZE * nodeid;
			
			++bufcount;
			
			if (bufcount == evalBufSize)
			{
				bufcount = 0;
				
				transpose8xM(exps, trExps, EXPSIZE);
				e2pWrapper(xrels, yrels, zrels, evalBufSize, trExps, args...);
				ne2p+=evalBufSize;
			}
		}
		else
		{
			if (node->child_id == 0) // || node->part_end - node->part_start < 100)
			{
				const int s = node->part_start;
				const int e = node->part_end;
				
				p2pWrapper(tree.xsorted.ptr() + s, tree.ysorted.ptr() + s,
						   tree.zsorted.ptr() + s, tree.qsorted.ptr() + s, e - s, xt, yt, zt, args...);
				np2p += e-s;
			}
			else
			{
				for(int c = 0; c < nchildren; ++c)
					stack[++stackentry] = node->child_id + c;
				
				maxentry = std::max(maxentry, stackentry);
			}
		}
	}
	
	if (bufcount)
	{
		for (int i=bufcount; i<evalBufSize; i++)
		{
			xrels[i] = 1.0;
			yrels[i] = 1.0;
			zrels[i] = 1.0;
			exps[i] = zeros;
		}
		
		transpose8xM(exps, trExps, EXPSIZE);
		e2pWrapper(xrels, yrels, zrels, evalBufSize, trExps, args...);
		ne2p+=evalBufSize;
	}
}

template<typename... Args>
void FMM3D::evaluate(const double xt, const double yt, const double zt,
			  double &xr, double &yr, double &zr, const double* &ptrExps,
			  Args&... args)
{
	//static int nnn = 0;
	const int leaf = tree.findLeaf(xt, yt, zt);
	ptrExps = tree.locExps.ptr() + leaf*EXPSIZE;
	flush(args...	);
	//printf("%d:  %d\n", nnn++, leaf);
	
	xr = xt - tree.nodes[leaf].xcom;
	yr = yt - tree.nodes[leaf].ycom;
	zr = zt - tree.nodes[leaf].zcom;
	
	const auto& neighbors = tree.getNeigh(leaf);
	for (int nId : neighbors)
	{
		const int s = tree.nodes[nId].part_start;
		const int e = tree.nodes[nId].part_end;
		p2pWrapper(tree.xsorted.ptr() + s, tree.ysorted.ptr() + s,
				   tree.zsorted.ptr() + s, tree.qsorted.ptr() + s, e - s, xt, yt, zt, args...);
	}
}

void FMM3D::buildTree(const int nsrc,
					  const double* __restrict const xsrc,
					  const double* __restrict const ysrc,
					  const double* __restrict const zsrc,
					  const double* __restrict const qsrc)
{
	tree.build(nsrc, xsrc, ysrc, zsrc, qsrc, profiler);
}

void FMM3D::potentialLog(const int ndst,
						 const double* __restrict const xdst,
						 const double* __restrict const ydst,
						 const double* __restrict const zdst,
						 double* __restrict const potential)
{
	
	profiler.profile("Potential (LOG)", [&]() {
#pragma omp parallel for schedule(dynamic,4)
		for(int i = 0; i < ndst; ++i)
			evaluateLog(xdst[i], ydst[i], zdst[i], potential[i]);
	});
}

void FMM3D::forceLog(const int ndst,
				  const double* __restrict const xdst,
				  const double* __restrict const ydst,
				  const double* __restrict const zdst,
				  double* __restrict const xfrc,
				  double* __restrict const yfrc,
				  double* __restrict const zfrc)
{
	
	profiler.profile("Force (LOG)", [&]() {
#pragma omp parallel for schedule(dynamic,4)
		for(int i = 0; i < ndst; ++i)
			evaluateLog(xdst[i], ydst[i], zdst[i], xfrc[i], yfrc[i], zfrc[i]);
	});
}

void FMM3D::potential(const int ndst,
					  const double* __restrict const xdst,
					  const double* __restrict const ydst,
					  const double* __restrict const zdst,
					  double* __restrict const pot)
{
	xrel.resize(ndst);
	yrel.resize(ndst);
	zrel.resize(ndst);
	expPtrs.resize(ndst);
	
	profiler.profile("Potential (LIN)", [&]() {
#pragma omp parallel for schedule(dynamic,4)
		for(int i = 0; i < ndst; ++i)
			evaluate(xdst[i], ydst[i], zdst[i],
					 xrel[i], yrel[i], zrel[i], expPtrs[i],
					 pot[i]);
	});
	
	profiler.profile("Potential EXPS", [&]() {
		// TODO:
		// Consolidate particles within the same leaf, get rid of gather in l2p
#pragma omp parallel
		{
			const int nThreads = omp_get_max_threads();
			const int chunkSize = ((ndst / nThreads) | 31) + 1; // Divisible by 32, larger than minimum required

			const int thId = omp_get_thread_num();
			const int start = thId * chunkSize;
			const int myNdst = std::min(chunkSize, ndst - start);
			
			ispc::l2p(xrel.ptr()+start, yrel.ptr()+start, zrel.ptr()+start, expPtrs.ptr()+start, myNdst, pot+start);
		}
	});
}

void FMM3D::force(const int ndst,
				  const double* __restrict const xdst,
				  const double* __restrict const ydst,
				  const double* __restrict const zdst,
				  double* __restrict const xfrc,
				  double* __restrict const yfrc,
				  double* __restrict const zfrc)
{
	xrel.resize(ndst);
	yrel.resize(ndst);
	zrel.resize(ndst);
	expPtrs.resize(ndst);
	
	profiler.profile("Force (LIN)", [&]() {
#pragma omp parallel for schedule(dynamic,4)
		for(int i = 0; i < ndst; ++i)
			evaluate(xdst[i], ydst[i], zdst[i], xrel[i],
					 yrel[i], zrel[i], expPtrs[i],
					 xfrc[i], yfrc[i], zfrc[i]);
	});
	
	profiler.profile("Force EXPS", [&]() {
		// TODO:
		// Consolidate particles within the same leaf, get rid of gather in l2p
#pragma omp parallel
		{
			const int nThreads = omp_get_max_threads();
			const int chunkSize = ((ndst / nThreads) | 31) + 1; // Divisible by 32, larger than minimum required
			
			const int thId = omp_get_thread_num();
			const int start = thId * chunkSize;
			const int myNdst = std::min(chunkSize, ndst - start);
			
			ispc::l2pForce(xrel.ptr()+start, yrel.ptr()+start, zrel.ptr()+start, expPtrs.ptr()+start,
						   myNdst, xfrc+start, yfrc+start, zfrc+start);
		}
	});

}
