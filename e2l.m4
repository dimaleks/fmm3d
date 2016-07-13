include(unroll.m4)

divert(-1)
define(`m4abs', `ifelse(eval($1 >= 0), `1', `$1', eval(0-$1))')dnl
define(`feval', `syscmd( bc -l <<< "define f(x) { if(x <= 1) return (1); return (f(x-1) * x); } scale=20; print $1") ')
divert(0)dnl

#include "harmAVX.h"
#include "a.h"
#include <cstdlib>

void e2l(
	const double xrels[],
	const double yrels[],
	const double zrels[],
	const double srcexps[],
	double dstexps[])
{
	for (int i=0; i<8; i+=4)
	{
		__m256d Lre[ORDER][ORDER];
		__m256d Lim[ORDER][ORDER];

		__m256d Ore[ORDER][ORDER];
		__m256d Oim[ORDER][ORDER];

		__m256d Yre[2*ORDER-1][2*ORDER-1];
		__m256d Yim[2*ORDER-1][2*ORDER-1];

		LUNROLL(n, 0, ORDER-1, `LUNROLL(m, 0, n, `
		Lre[`'n`']['`m'`] = _mm256_setzero_pd();
		Lim[`'n`']['`m'`] = _mm256_setzero_pd();')')

		LUNROLL(n, 0, ORDER-1, `LUNROLL(m, 0, n, `
		Ore[`'n`']['`m'`] = _mm256_load_pd(srcexps + eval( ((n-1) * (n+2) + 2 + m)*8 ) + i);
		Oim[`'n`']['`m'`] = _mm256_load_pd(srcexps + eval( ((n-1) * (n+2) + 3 + n + m)*8 ) + i);')')

		// Set up the arguments of the harmonic functions
		const __m256d x = _mm256_load_pd(xrels+i);
		const __m256d y = _mm256_load_pd(yrels+i);
		const __m256d z = _mm256_load_pd(zrels+i);

		const __m256d xxyy  = x*x + y*y;
		const __m256d rho2  = xxyy + z*z;
		const __m256d rho   = _mm256_sqrt_pd(rho2);
		const __m256d rho_1 = _mm256_set1_pd(1.0) / rho;

		const __m256d costheta = z * rho_1;
		const __m256d sintheta = _mm256_sqrt_pd(_mm256_set1_pd(1.0) - costheta*costheta);

		const __m256d phiMag_1 = _mm256_set1_pd(1.0) / _mm256_sqrt_pd(xxyy);
		__m256d mag_1 = _mm256_set1_pd(1.0);
		__m256d phi_x = _mm256_set1_pd(1.0);
		__m256d phi_y = _mm256_set1_pd(0.0);
		__m256d tmp;

		// Set up rho's
		__m256d rhos[2*ORDER];
		rhos[0] = _mm256_set1_pd(1.0);
		rhos[1] = rho_1;

		LUNROLL(n, 2, 2*ORDER-1, `rhos[`'n`'] = rhos[decr(n)] * rho_1;
		')

		{
			// Set up sin and cos of phi
			LUNROLL(m, 0, 2*ORDER-2, `
			const __m256d cosphi_`'m = phi_x * mag_1;
			const __m256d sinphi_`'m = phi_y * mag_1;
			tmp = phi_x*x - phi_y*y;
			phi_y = phi_x*y + phi_y*x;
			phi_x = tmp;
			mag_1 *= phiMag_1;
			')

			// Precompute the harmonics
			LUNROLL(n, 0, 2*ORDER-2, `LUNROLL(m, 0, n, `
			const __m256d absY_`'n`'_`'m`' = Y_`'n`'_`'m`'(sintheta, costheta);
			Yre[`'n`'][`'m`'] = absY_`'n`'_`'m`' * cosphi_`'m;
			Yim[`'n`'][`'m`'] = absY_`'n`'_`'m`' * sinphi_`'m;
			')')
		}

		// Now begin conversion to local
		//
		// First double loop with k and j
		// Second - with n and m

		for (int j=0; j<ORDER; j++)
		{
			for (int k=0; k<=j; k++)
			{
				LUNROLL(n, 0, ORDER-1, `LUNROLL(m, -n, n, `
				if (std::abs(m-k) <= std::abs(j+n))
				{
					const __m256d f = _mm256_set1_pd(
							( (std::abs(k-(m)) - std::abs(k) - std::abs(m)) % 4 == 0 ? 1 : -1 ) * ifelse( eval(n % 2), 0, 1, -1 ) *
							A[j][k] * A[n][m4abs(m)] / A[j+n][std::abs(m-k)] ) * rhos[j+n+1];

					const __m256d reO = ifelse( eval( m % 2 ), -1, `-', `') Ore[`'n`'][`'m4abs(m)`'];
					const __m256d imO = ifelse( eval( m < 0 && m % 2 == 0 ), 1, `-', `') Oim[`'n`'][`'m4abs(m)`'];

					const __m256d reY = ((m-k) % 2 == -1) ? -Yre[j+n][std::abs(m-k)] : Yre[j+n][std::abs(m-k)];
					const __m256d imY = ((m-k) < 0 && (m-k) % 2 == 0) ? Yim[j+n][std::abs(m-k)] : -Yim[j+n][std::abs(m-k)];

					Lre[j][k] += f * (reY*reO - imY*imO);
					Lim[j][k] += f * (reY*imO + imY*reO);
				}
				')')
			}
		}

		LUNROLL(n, 0, ORDER-1, `LUNROLL(m, 0, n, `
		_mm256_store_pd(dstexps + eval( ((n-1) * (n+2) + 2 + m)*8 ),     Lre[`'n`'][`'m`']);
		_mm256_store_pd(dstexps + eval( ((n-1) * (n+2) + 3 + n + m)*8 ), Lim[`'n`'][`'m`']);
		')')
	}
}
