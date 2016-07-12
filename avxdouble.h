//
//  avxdouble.h
//
//  Created by Dmitry Alexeev on 30/10/15.
//  Copyright © 2015 Dmitry Alexeev. All rights reserved.
//

#ifndef avxdouble_h
#define avxdouble_h

#include <immintrin.h>

#if defined __INTEL_COMPILER


inline __m256d operator + (double a, __m256d b)
{
	return _mm256_add_pd(_mm256_set1_pd(a), b);
}

inline __m256d operator * (double a, __m256d b)
{
	return _mm256_mul_pd(_mm256_set1_pd(a), b);
}

inline __m256d operator - (double a, __m256d b)
{
	return _mm256_sub_pd(_mm256_set1_pd(a), b);
}

inline __m256d operator / (double a, __m256d b)
{
	return _mm256_div_pd(_mm256_set1_pd(a), b);
}

inline __m256d operator + (__m256d a, double b)
{
	return _mm256_add_pd(a, _mm256_set1_pd(b));
}

inline __m256d operator * (__m256d a, double b)
{
	return _mm256_mul_pd(a, _mm256_set1_pd(b));
}

inline __m256d operator - (__m256d a, double b)
{
	return _mm256_sub_pd(a, _mm256_set1_pd(b));
}

inline __m256d operator / (__m256d a, double b)
{
	return _mm256_div_pd(a, _mm256_set1_pd(b));
}


#endif

inline double horizontalAdd(__m256d v)
{
	//http://stackoverflow.com/questions/9775538/fastest-way-to-do-horizontal-vector-sum-with-avx-instructions
	v = _mm256_hadd_pd(v, _mm256_permute2f128_pd(v, v, 1));
	v = _mm256_hadd_pd(v, v);
	return _mm_cvtsd_f64(_mm256_castpd256_pd128(v));
}


#endif /* avxdouble_h */




