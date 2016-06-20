#include <omp.h>
#include <cmath>

#if defined(__INTEL_COMPILER)
#include "tbb/parallel_sort.h"
#elif defined(__clang__)
#include <algorithm>
#else
#include <parallel/algorithm>
#endif

#include "treekernels.h"

#define LMAX 15

void extent(const int N, const double* const x, const double* const y,
			double& xmin, double& ymin, double& ext)
{
	const int nthreads = omp_get_max_threads();

	const int chunksize = ((N / nthreads) | 31) + 1;

	double xmax, ymax;

	if (chunksize > 10000)
	{
		double xs alignas(64) [nthreads * 2];
		double ys alignas(64) [nthreads * 2];

#pragma omp parallel
		{

			const int tid = omp_get_thread_num();
			const int myn = std::min(chunksize, N - tid*chunksize);
			ispc::minmax(myn, x + tid*chunksize, y + tid*chunksize,
						xs[tid*2], xs[tid*2 + 1], ys[tid*2], ys[tid*2 + 1]);
		}

		ispc::minmax(nthreads*2, xs, ys, xmin, xmax, ymin, ymax);
	}
	else
	{
		ispc::minmax(N, x, y, xmin, xmax, ymin, ymax);
	}

	// For numerical reasons, shift the domain boundaries out by epsilon
	const double eps = 10000 * std::numeric_limits<double>::epsilon();
	ext = std::max(xmax - xmin, ymax - ymin) * (1 + 2*eps);
	xmin -= eps * ext;
	ymin -= eps * ext;
}

void morton(const int N, const double* __restrict const x, const double* __restrict const y,
			const double xmin, const double ymin, const double ext, int* __restrict index)
{
#ifdef __INTEL_COMPILER
	  __assume_aligned(x, 32);
	  __assume_aligned(y, 32);
	  __assume_aligned(index, 32);
#endif

	ispc::morton(N, x, y, xmin, ymin, ext, index, omp_get_max_threads());
}

void sort(const int N, int* index, int* keys)
{
	std::pair<int, int> * kv = NULL;
	posix_memalign((void **)&kv, 32, sizeof(*kv) * N);

#pragma omp parallel for
	for(int i = 0; i < N; ++i)
	{
		kv[i].first = index[i];
		kv[i].second = keys[i];
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
		keys[i] = kv[i].second;
	}

	free(kv);
}

void reorder(const int N,
			 const int* __restrict const keys,
			 const double* __restrict const x,
			 const double* __restrict const y,
			 const double* __restrict const q,
			 double* __restrict xsorted,
			 double* __restrict ysorted,
			 double* __restrict qsorted)
{
#ifdef __INTEL_COMPILER
	  __assume_aligned(x, 32);
	  __assume_aligned(y, 32);
	  __assume_aligned(q, 32);

	  __assume_aligned(xsorted, 32);
	  __assume_aligned(ysorted, 32);
	  __assume_aligned(qsorted, 32);

	  __assume_aligned(keys, 32);
#endif

	#pragma omp parallel for
	for(int i = 0; i < N; ++i)
	{
		const int entry = keys[i];

		xsorted[i] = x[entry];
		ysorted[i] = y[entry];
		qsorted[i] = q[entry];
	}
}


void node_setup(const double xsources[],
				const double ysources[],
				const double msources[],
				const int nsources,
				double& mass,
				double& xcom,
				double& ycom,
				double& radius,
				double& w)
{
	ispc::node_setup(xsources, ysources, msources, nsources, mass, xcom, ycom, radius, w);
}
