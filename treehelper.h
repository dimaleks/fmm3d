
#pragma once

#include <immintrin.h>

#define LMAX 10

void extent(const int N,
			const double* __restrict const x,
			const double* __restrict const y,
			const double* __restrict const z,
			double& xmin, double& ymin, double& zmin,
			double& ext);

void morton(const int N, const double* __restrict const x, const double* __restrict const y, const double* __restrict const z,
			const double xmin, const double ymin, const double zmin, const double ext, int* __restrict index);

void sort(const int N, int* __restrict index, int* __restrict keys);

void reorder(const int N,
			 const int* __restrict const keys,
			 const double* __restrict const x,
			 const double* __restrict const y,
			 const double* __restrict const z,
			 const double* __restrict const q,
			 double* __restrict xsorted,
			 double* __restrict ysorted,
			 double* __restrict zsorted,
			 double* __restrict qsorted);

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
				double& w);



inline void _transpose4x4_AVX(const double *a0, const double* a1, const double *a2, const double *a3, double *b, const int n)
{
	__m256d row0 = _mm256_loadu_pd(a0);
	__m256d row1 = _mm256_loadu_pd(a1);
	__m256d row2 = _mm256_loadu_pd(a2);
	__m256d row3 = _mm256_loadu_pd(a3);

	__m256d tmp0 = _mm256_shuffle_pd(row0, row1, 0x0);
	__m256d tmp2 = _mm256_shuffle_pd(row0, row1, 0xF);
	__m256d tmp1 = _mm256_shuffle_pd(row2, row3, 0x0);
	__m256d tmp3 = _mm256_shuffle_pd(row2, row3, 0xF);

	row0 = _mm256_permute2f128_pd(tmp0, tmp1, 0x20);
	row1 = _mm256_permute2f128_pd(tmp2, tmp3, 0x20);
	row2 = _mm256_permute2f128_pd(tmp0, tmp1, 0x31);
	row3 = _mm256_permute2f128_pd(tmp2, tmp3, 0x31);

	_mm256_storeu_pd(b,       row0);
	_mm256_storeu_pd(b +   n, row1);
	_mm256_storeu_pd(b + 2*n, row2);
	_mm256_storeu_pd(b + 3*n, row3);
}

inline void transpose8xM(const double *from[8], double *to, int m)
{
	const int elemSize = 4;
	const int blockSize = 8;
	const int niceM = (m / elemSize) * elemSize;

#pragma unroll
	for (int i=0; i<8; i+=elemSize)
	{
		for (int j=0; j<niceM; j+=blockSize)
			for (int q=j; q < std::min(j+blockSize, niceM); q+=elemSize)
				_transpose4x4_AVX(from[i]+q, from[i+1]+q, from[i+2]+q, from[i+3]+q, to+q*8+i, 8);

		for (int q=niceM; q<m; q++)
		{
			to[q*8 + i+0] = from[i+0][q];
			to[q*8 + i+1] = from[i+1][q];
			to[q*8 + i+2] = from[i+2][q];
			to[q*8 + i+3] = from[i+3][q];
		}
	}
}

inline void transposeMx8(const double *from, double *to[8], int m)
{
	// This one is not in intensive use
	const int blockSize = 8;

#pragma unroll
	for (int i=0; i<8; i++)
		for (int j=0; j<m; j+=blockSize)
			for (int q=j; q < std::min(j+blockSize, m); q++)
				to[i][q] = from[q*8 + i];
}


inline int getThirdBits(const int m)
{
	int x = m;
	x = x               & 0x09249249;
	x = (x ^ (x >> 2))  & 0x030c30c3;
	x = (x ^ (x >> 4))  & 0x0300f00f;
	x = (x ^ (x >> 8))  & 0xff0000ff;
	x = (x ^ (x >> 16)) & 0x000003ff;

	return x;
}

inline void mortonDecode(const int m, int& x, int& y, int& z)
{
	// https://github.com/Forceflow/libmorton
	x = getThirdBits(m);
	y = getThirdBits(m >> 1);
	z = getThirdBits(m >> 2);
}

inline int morton3D_SplitBy3bits(const int a)
{
	int x = a;
	x = x               & 0x000003ff;
	x = (x | (x << 16)) & 0xff0000ff;
	x = (x | (x << 8))  & 0x0300f00f;
	x = (x | (x << 4))  & 0x030c30c3;
	x = (x | (x << 2))  & 0x09249249;

	return x;
}

inline int mortonEncode(const int xid, const int yid, const int zid)
{
	// https://fgiesen.wordpress.com/2009/12/13/decoding-morton-codes/
	return morton3D_SplitBy3bits(xid) | (morton3D_SplitBy3bits(yid) << 1) | (morton3D_SplitBy3bits(zid) << 2);
}
