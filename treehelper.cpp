#include <omp.h>
#include <cmath>
#include <algorithm>

#if defined(__INTEL_COMPILER)
#include "tbb/parallel_sort.h"
#elif defined(__clang__)

#else
#include <parallel/algorithm>
#endif

#include "treekernels.h"

#define LMAX 21

void extent(const int N,
		const double* __restrict const x,
		const double* __restrict const y,
		const double* __restrict const z,
		double& xmin, double& ymin, double& zmin,
		double& ext)
{
	const int nthreads = omp_get_max_threads();

	const int chunksize = ((N / nthreads) | 31) + 1;

	double xmax, ymax, zmax;

	if (chunksize > 10000)
	{
		double xs alignas(64) [nthreads * 2];
		double ys alignas(64) [nthreads * 2];
		double zs alignas(64) [nthreads * 2];

#pragma omp parallel
		{

			const int tid = omp_get_thread_num();
			const int myn = std::min(chunksize, N - tid*chunksize);
			ispc::minmax(myn, x + tid*chunksize, y + tid*chunksize, z + tid*chunksize,
					xs[tid*2], xs[tid*2 + 1], ys[tid*2], ys[tid*2 + 1], zs[tid*2], zs[tid*2 + 1]);
		}

		ispc::minmax(nthreads*2, xs, ys, zs, xmin, xmax, ymin, ymax, zmin, zmax);
	}
	else
	{
		ispc::minmax(N, x, y, z, xmin, xmax, ymin, ymax, zmin, zmax);
	}

	// For numerical reasons, shift the domain boundaries out by epsilon
	const double eps = 10000 * std::numeric_limits<double>::epsilon();
	ext = std::max( {xmax-xmin, ymax-ymin, zmax-zmin} ) * (1 + 2*eps);
	xmin -= eps * ext;
	ymin -= eps * ext;
	zmin -= eps * ext;
}

void morton(const int N, const double* __restrict const x, const double* __restrict const y, const double* __restrict const z,
		const double xmin, const double ymin, const double zmin, const double ext, int64_t* __restrict index)
{
	ispc::morton(N, x, y, z, xmin, ymin, zmin, ext, index, omp_get_max_threads());
}

void sort(const int N, int64_t* __restrict index, int* __restrict order)
{
	std::pair<int64_t, int> *kv;
	posix_memalign((void **)&kv, 32, sizeof(*kv) * N);

#pragma omp parallel for
	for(int i = 0; i < N; ++i)
	{
		kv[i].first = index[i];
		kv[i].second = order[i];
	}


#if defined(__INTEL_COMPILER)
	tbb::parallel_sort(kv, kv + N);
#elif defined(__clang__)
	std::sort(kv, kv + N);
#else
	__gnu_parallel::sort(kv, kv + N);
#endif

#pragma omp parallel for
	for(int i = 0; i < N; ++i)
	{
		index[i] = kv[i].first;
		order[i] = kv[i].second;
	}

	free(kv);
}

void reorder(const int N,
		const int* __restrict const keys,
		const double* __restrict const x,
		const double* __restrict const y,
		const double* __restrict const z,
		const double* __restrict const q,
		double* __restrict xsorted,
		double* __restrict ysorted,
		double* __restrict zsorted,
		double* __restrict qsorted)
{
#ifdef __INTEL_COMPILER
	__assume_aligned(x, 32);
	__assume_aligned(y, 32);
	__assume_aligned(z, 32);
	__assume_aligned(q, 32);

	__assume_aligned(xsorted, 32);
	__assume_aligned(ysorted, 32);
	__assume_aligned(zsorted, 32);
	__assume_aligned(qsorted, 32);

	__assume_aligned(keys, 32);
#endif

#pragma omp parallel for
	for(int i = 0; i < N; ++i)
		xsorted[i] = x[keys[i]];

#pragma omp parallel for
	for(int i = 0; i < N; ++i)
		ysorted[i] = y[keys[i]];

#pragma omp parallel for
	for(int i = 0; i < N; ++i)
		zsorted[i] = z[keys[i]];

#pragma omp parallel for
	for(int i = 0; i < N; ++i)
		qsorted[i] = q[keys[i]];
}


void node_setup(const double xsrc[],
		const double ysrc[],
		const double zsrc[],
		const double qsrc[],
		const int nsrc,
		double& Q,
		double& xcom,
		double& ycom,
		double& zcom,
		double& radius,
		double& w)
{
	ispc::node_setup(xsrc, ysrc, zsrc, qsrc, nsrc, Q, xcom, ycom, zcom, radius, w);
}

