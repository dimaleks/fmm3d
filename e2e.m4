include(unroll.m4)

divert(-1)
define(`m4abs', `ifelse(eval($1 >= 0), `1', `$1', eval(0-$1))')dnl
define(`feval', `syscmd( printf "%0.16f" $(bc -l <<< "define f(x) { if(x <= 1) return (1); return (f(x-1) * x); } scale=20; print $1") )')
divert(0)dnl

#include "harmAVX.h"
#include "avxdouble.h"

void e2e(
	const double xrels[],
	const double yrels[],
	const double zrels[],
	const double srcexps[],
	double dstexp[])
{
	LUNROLL(n, 0, ORDER-1, `__m256d substr(echo(LUNROLL(m, 0, n, `, Mre_`'n`'_`'m = _mm256_setzero_pd()');), `1')'
	)
	LUNROLL(n, 0, ORDER-1, `__m256d substr(echo(LUNROLL(m, 0, n, `, Mim_`'n`'_`'m = _mm256_setzero_pd()');), `1')'
	)

	for (int i=0; i<8; i+=4)
	{
		// Set up the expansion coefficients
		LUNROLL(n, 0, ORDER-1, `__m256d substr(echo(LUNROLL(m, 0, n, `, Ore_`'n`'_`'m = _mm256_load_pd(srcexps + eval( ((n-1) * (n+2) + 2 + m)*8 ) + i)');), `1')'
		)
		LUNROLL(n, 0, ORDER-1, `__m256d substr(echo(LUNROLL(m, 0, n, `, Oim_`'n`'_`'m = _mm256_load_pd(srcexps + eval( ((n-1) * (n+2) + 3 + n + m)*8 ) + i)');), `1')'
		)

		// Set up the arguments of the harmonic functions
		const __m256d x = _mm256_load_pd(xrels+i);
		const __m256d y = _mm256_load_pd(yrels+i);
		const __m256d z = _mm256_load_pd(zrels+i);

		const __m256d xxyy  = x*x + y*y;
		const __m256d rho2  = xxyy + z*z;
		const __m256d rho   = _mm256_sqrt_pd(rho2);
		const __m256d rho_1 = 1.0d / rho;

		const __m256d costheta = z * rho_1;
		const __m256d sintheta = _mm256_sqrt_pd(1 - costheta*costheta);

		const __m256d phiMag_1 = 1.0 / _mm256_sqrt_pd(xxyy);
		__m256d mag_1 = _mm256_set1_pd(1.0);
		__m256d phi_x = _mm256_set1_pd(1.0);
		__m256d phi_y = _mm256_set1_pd(0.0);
		__m256d tmp;

		LUNROLL(n, 0, ORDER-1, `LUNROLL(m, 0, n, `__m256d reY_`'n`'_`'m`';
		__m256d imY_`'n`'_`'m`';
		')')

		// Set up rho's
		const __m256d rho0 = _mm256_set1_pd(1.0);
		const __m256d rho1 = rho;
		LUNROLL(n, 3, ORDER-1, `const __m256d rho`'n`' = rho`'decr(n) * rho;
		')

		{
			// Set up sin and cos of phi
			LUNROLL(m, 0, ORDER-1, `const __m256d cosphi_`'m = phi_x * mag_1;
			const __m256d sinphi_`'m = phi_y * mag_1;
			tmp = phi_x*x - phi_y*y;
			phi_y = phi_x*y + phi_y*x;
			phi_x = tmp;
			mag_1 *= phiMag_1;

			')

			// Precompute the harmonics
			LUNROLL(n, 0, ORDER-1, `LUNROLL(m, 0, n, `const __m256d absY_`'n`'_`'m`' = Y_`'n`'_`'m`'(sintheta, costheta);
			reY_`'n`'_`'m`' = absY_`'n`'_`'m`' * cosphi_`'m;
			imY_`'n`'_`'m`' = absY_`'n`'_`'m`' * sinphi_`'m;

			')')
		}

		// Now begin translation
		//
		// First double loop with k and j
		// Second - with n and m

		LUNROLL(j, 0, ORDER-1, `LUNROLL(k, 0, j, `LUNROLL(n, 0, j, `LUNROLL(m, -n, n, `ifelse(eval(m4abs(eval(k-m)) <= m4abs(eval(j-n))), 1, `{
			const __m256d f = feval( ifelse( eval(m4abs( eval((m4abs(k) - m4abs(m) - m4abs(eval(k-m))) % 4) )), 0, 1, -1) * \
									sqrt( f(j-k)*f(j+k) / (f(j-n-k+(m))*f(j-n+k-(m))*f(n-(m))*f(n+(m))) )  ) * rho`'n`';
			const __m256d reO = Ore_`'eval(j-n)_`'m4abs(eval(k-m));
			const __m256d imO = ifelse( eval( k-m > 0 ), 1, `', `-') Oim_`'eval(j-n)_`'m4abs(eval(k-m));

			Mre_`'j`'_`'k += f * (reY_`'n`'_`'m4abs(m) * reO ifelse( eval( m > 0 ), 1, `-', `+') imY_`'n`'_`'m4abs(m) * imO);
			Mim_`'j`'_`'k += f * (reY_`'n`'_`'m4abs(m) * imO ifelse( eval( m > 0 ), 1, `+', `-') imY_`'n`'_`'m4abs(m) * reO);
		}

		')')')')')
	}

	LUNROLL(n, 0, ORDER-1, `LUNROLL(m, 0, n, `dstexp[eval((n-1) * (n+2) + 2 + m)] = horizontalAdd(Mre_`'n`'_`'m`');
	dstexp[eval((n-1) * (n+2) + 3 + n + m)] = horizontalAdd(Mim_`'n`'_`'m`');
	')')
}
