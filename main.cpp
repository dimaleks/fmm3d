#include <unistd.h>

#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cassert>
#include <cstring>

#include <algorithm>
#include <limits>
#include <vector>

#include "timer.h"
#include "tree.h"
#include "kernels.h"	// p2e, e2p, p2p

#define LMAX 10
#define EXPSIZE (ORDER * (ORDER+3) + 2)
double tol = 1e-8;

void check(const double * ref, const double * res, const int N)
{
	double linf = 0, l1 = 0, linf_rel = 0, l1_rel = 0;

	for(int i = 0; i < N; ++i)
	{
		assert(!std::isnan(ref[i]));
		assert(!std::isnan(res[i]));

		const double err = ref[i] - res[i];
		const double maxval = std::max(fabs(res[i]), fabs(ref[i]));
		const double relerr = err/std::max(1e-3, maxval);

		if (fabs(relerr) >= tol && fabs(err) >= tol)
			printf("%d: %e ref: %e -> %e %e\n", i, res[i], ref[i], err, relerr);

		assert(fabs(relerr) < tol || fabs(err) < tol);

		l1 += fabs(err);
		l1_rel += fabs(relerr);

		linf = std::max(linf, fabs(err));
		linf_rel = std::max(linf_rel, fabs(relerr));
	}

	l1 /= N;
	l1_rel /= N;

	printf("l-infinity errors: %.03e (absolute) %.03e (relative)\n", linf, linf_rel);
	printf("       l-1 errors: %.03e (absolute) %.03e (relative)\n", l1, l1_rel);
}


void evaluate(	const Node* nodes,
				const double *expdata,
				const double *xdata,
				const double *ydata,
				const double *zdata,
				const double *qdata,
				const double thetasquared,
				double * const result,
				const double xt,
				const double yt,
				const double zt)
{
	int ne2p = 0, np2p = 0;

	static const int nchildren = 8;
	enum { BUFSIZE = 16 };

	int stack[LMAX * 8];

	int bufcount = 0;
	double xrels alignas(32) [BUFSIZE], yrels alignas(32) [BUFSIZE];
	double zrels alignas(32) [BUFSIZE], qs    alignas(32) [BUFSIZE];
	const double *exps[BUFSIZE];

	int stackentry = 0, maxentry = 0;

	stack[0] = 0;
	*result = 0;
	while(stackentry > -1)
	{
		const int nodeid = stack[stackentry--];
		const Node * const node = nodes + nodeid;

		assert(nodeid < node->child_id || node->child_id == 0);

		const double xr = xt - node->xcom;
		const double yr = yt - node->ycom;
		const double zr = zt - node->zcom;
		const double r2 = xr*xr + yr*yr + zr*zr;

		if (node->r * node->r < thetasquared * r2)
		{
			xrels[bufcount] = xr;
			yrels[bufcount] = yr;
			zrels[bufcount] = zr;
			qs[bufcount] = node->Q;
			exps[bufcount] = expdata + EXPSIZE * nodeid;

			++bufcount;

			if (bufcount == BUFSIZE)
			{
				bufcount = 0;
				*result += ispc::e2p(xrels, yrels, zrels, BUFSIZE, exps);

				ne2p+=BUFSIZE;
			}
		}
		else
		{            
			if (node->child_id == 0) // || node->part_end - node->part_start < 100)
			{
				const int s = node->part_start;
				const int e = node->part_end;

				*result += ispc::p2p(xdata + s, ydata + s, zdata +s, qdata + s, e - s, xt, yt, zt);
				np2p+=e-s;
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
		*result += ispc::e2p(xrels, yrels, zrels, bufcount, exps);
		ne2p+=bufcount;
	}

	//printf("Took %d e2p,  %d p2p\n", ne2p, np2p);
}


void potential(double theta, double *xsrc, double *ysrc, double *zsrc, double *qsrc, int nsrc,
			  double *xdst, double *ydst, double *zdst, int ndst, double *pdst)
{
	static bool maxN = 0;
	static double *xsorted = nullptr, *ysorted, *zsorted, *qsorted;
	static double *expansions;
	static Node   *nodes;

	const int k = 1536;	// leaf capacity
	int maxnodes;

	if (maxN < nsrc)
	{
		if (xsorted != nullptr)
		{
			free(xsorted);
			free(ysorted);
			free(zsorted);
			free(qsorted);
			free(nodes);
			free(expansions);
		}

		posix_memalign((void **)&xsorted, 32, sizeof(double) * nsrc);
		posix_memalign((void **)&ysorted, 32, sizeof(double) * nsrc);
		posix_memalign((void **)&zsorted, 32, sizeof(double) * nsrc);
		posix_memalign((void **)&qsorted, 32, sizeof(double) * nsrc);

		maxnodes = (nsrc + k - 1) / k * 20;
		posix_memalign((void **)&nodes, 32, sizeof(Node) * maxnodes);
		posix_memalign((void **)&expansions, 32, sizeof(double) * EXPSIZE * maxnodes);
		maxN = nsrc;
	}

	build(xsrc, ysrc, zsrc, qsrc, nsrc, k, maxnodes, xsorted, ysorted, zsorted, qsorted, nodes, expansions);

	Timer tm;
	tm.start();

	#pragma omp parallel for schedule(static,1)
	for(int i = 0; i < ndst; ++i)
		evaluate(nodes, expansions, xsorted, ysorted, zsorted, qsorted,
				theta*theta, pdst + i, xdst[i], ydst[i], zdst[i]);
	double t = tm.elapsed();
	printf("Evaluation took %.3f ms (%.3f us per target)\n", t*1e-6, t*1e-3 / ndst);
}

void test(double theta, double tol, bool verify = true)
{
	const int nsrc = 2097152;
	double *xsrc, *ysrc, *zsrc, *qsrc;

	posix_memalign((void **)&xsrc, 32, sizeof(double) * nsrc);
	posix_memalign((void **)&ysrc, 32, sizeof(double) * nsrc);
	posix_memalign((void **)&zsrc, 32, sizeof(double) * nsrc);
	posix_memalign((void **)&qsrc, 32, sizeof(double) * nsrc);

	for (int i=0; i<nsrc; i++)
	{
		xsrc[i] = drand48() - 0.5;
		ysrc[i] = drand48() - 0.5;
		zsrc[i] = drand48() - 0.5;

		qsrc[i] = 0.1*(drand48() - 0.5);
	}


	int ndst = 189717;
	double *xdst, *ydst, *zdst, *potentials;
	posix_memalign((void **)&xdst,   32, sizeof(double) * ndst);
	posix_memalign((void **)&ydst,   32, sizeof(double) * ndst);
	posix_memalign((void **)&zdst,   32, sizeof(double) * ndst);
	posix_memalign((void **)&potentials, 32, sizeof(double) * ndst);

	for (int i=0; i<ndst; i++)
	{
		xdst[i] = drand48() - 0.5;
		ydst[i] = drand48() - 0.5;
		zdst[i] = drand48() - 0.5;
	}

	const double eps = std::numeric_limits<double>::epsilon() * 10;


	printf("Testing %s with %d sources and %d targets (theta %.3e)...\n", "POTENTIAL", nsrc, ndst, theta);

	Timer tm;
	tm.start();
	for (int n=0; n<1; n++)
		potential(theta, xsrc, ysrc, zsrc, qsrc, nsrc, xdst, ydst, zdst, ndst, potentials);
	const double tpot = tm.elapsed();

	printf("\x1b[94msolved in %.2f ms\x1b[0m\n", tpot * 1e-6);

	if (verify)
	{
		double *pref;
		posix_memalign((void **)&pref, 32, sizeof(double) * ndst);

		const int OFFSET = 0;
		const int JUMP = 435;

#pragma omp parallel for
		for(int i = OFFSET; i < ndst; i += JUMP)
		{
			const double xd = xdst[i];
			const double yd = ydst[i];
			const double zd = zdst[i];

			double s = 0;

			for(int j = 0; j < nsrc; ++j)
			{
				const double xr = xd - xsrc[j];
				const double yr = yd - ysrc[j];
				const double zr = zd - zsrc[j];
				const double r2 = xr*xr + yr*yr + zr*zr;
				s += (fabs(r2) > eps) ? qsrc[j] / sqrt(r2) : 0;
			}
			pref[i] = s;
		}

		std::vector<double> a, b;

		for(int i = OFFSET; i < ndst; i += JUMP)
		{
			a.push_back(pref[i]);
			b.push_back(potentials[i]);
		}

		check(&a[0], &b[0], a.size());
		free(pref);
	}

	free(xdst);
	free(ydst);
	free(zdst);
	free(potentials);

	free(xsrc);
	free(ysrc);
	free(zsrc);
	free(qsrc);

	printf("TEST PASSED.\n");
}

int main(int argc, char ** argv)
{
	double theta = 0.35;
	bool verify = true;

	if (argc > 1)
		theta = atof(argv[1]);

	if (argc > 2)
		tol = atof(argv[2]);

	if (argc > 3)
		verify = strcmp(argv[3], "profile") != 0;

	test(theta, tol, verify);

	return 0;
}
