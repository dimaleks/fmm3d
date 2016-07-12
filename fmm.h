#pragma once

#include "profiler.h"
#include "tree.h"

#define EXPSIZE  (ORDER * (ORDER+1))

class FMM3D
{
	double theta2;
	double zeros alignas(32) [EXPSIZE];

	Tree::Tree tree;

	static const int evalBufSize = 8;

	template<typename... Args>
	void evaluate(const double xt,
				  const double yt,
				  const double zt,
				  Args&... args);

public:
	Profiler profiler;
	int ne2p, np2p;

	FMM3D(double theta, int leafCapacity);

	void buildTree( const int nsrc,
					const double* __restrict const xsrc,
					const double* __restrict const ysrc,
					const double* __restrict const zsrc,
					const double* __restrict const qsrc);

	void recomputeExpansions(const double* __restrict const qsrc);

	void potential( const int ndst,
					const double* __restrict const xdst,
					const double* __restrict const ydst,
					const double* __restrict const zdst,
						  double* __restrict const potential);

	void force( const int ndst,
				const double* __restrict const xdst,
				const double* __restrict const ydst,
				const double* __restrict const zdst,
					  double* __restrict const xfrc,
					  double* __restrict const yfrc,
					  double* __restrict const zfrc);
};
