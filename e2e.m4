include(unroll.m4)

divert(-1)
define(`abs', `ifelse(eval($1 >= 0), `1', `$1', eval(0-$1))')dnl
define(`sincos', `ifelse(eval($1 % 2), `0', `sin', `cos')')dnl
define(`cossin', `ifelse(eval($1 % 2), `0', `cos', `sin')')dnl
divert(0)dnl

#include "a.h"
#include "harmonics.h"

export void e2e(
          uniform const double xrels[],
          uniform const double yrels[],
          uniform const double zrels[],
          uniform const double * uniform srcexps[],
          uniform double dstexp[])
{
	LUNROLL(n, 0, ORDER-1, `double substr(echo(LUNROLL(m, 0, n, `, Mre_`'n`'_`'m = 0');), `1')'
	)
	LUNROLL(n, 0, ORDER-1, `double substr(echo(LUNROLL(m, 0, n, `, Mim_`'n`'_`'m = 0');), `1')'
	)

	foreach(i=0...8)
	{
		// Set up the expansion coefficients
		LUNROLL(n, 0, ORDER-1, `double substr(echo(LUNROLL(m, 0, n, `, Ore_`'n`'_`'m = srcexps[i][eval((n-1) * (n+2) + 2 + m)]');), `1')'
		)
		LUNROLL(n, 0, ORDER-1, `double substr(echo(LUNROLL(m, 0, n, `, Oim_`'n`'_`'m = srcexps[i][eval((n-1) * (n+2) + 3 + n + m)]');), `1')'
		)

		// Set up the arguments of the harmonic functions
		const double x = xrels[i];
		const double y = yrels[i];
		const double z = zrels[i];

		const double xxyy  = x*x + y*y;
		const double rho2  = xxyy + z*z;
		const double rho_1 = rsqrt(rho2);
		const double rho   = 1.0d / rho_1;

		const double costheta = z * rho_1;
		const double sintheta = sqrt(1 - costheta*costheta);

		const double phiMag_1 = rsqrt(xxyy);
		double mag_1 = 1;
		double phi_x = 1;
		double phi_y = 0;
		double tmp;

		LUNROLL(n, 0, ORDER-1, `LUNROLL(m, 0, n, `double reY_`'n`'_`'m`';
		double imY_`'n`'_`'m`';
		')')

		// Set up rho's
		const double rho0 = 1;
		const double rho1 = rho;
		LUNROLL(n, 3, ORDER-1, `const double rho`'n`' = rho`'decr(n) * rho;
		')

		{
			// Set up sin and cos of phi
			LUNROLL(m, 0, ORDER-1, `const double cosphi_`'m = phi_x * mag_1;
			const double sinphi_`'m = phi_y * mag_1;
			tmp = phi_x*x - phi_y*y;
			phi_y = phi_x*y + phi_y*x;
			phi_x = tmp;
			mag_1 *= phiMag_1;

			')

			// Precompute the harmonics
			LUNROLL(n, 0, ORDER-1, `LUNROLL(m, 0, n, `const double absY_`'n`'_`'m`' = Y_`'n`'_`'m`'(sintheta, costheta);
			reY_`'n`'_`'m`' = absY_`'n`'_`'m`' * cosphi_`'abs(m);
			imY_`'n`'_`'m`' = absY_`'n`'_`'m`' * sinphi_`'abs(m);

			')')
		}

		// Now begin translation
		//
		// First double loop with k and j
		// Second - with n and m

		LUNROLL(j, 0, ORDER-1, `LUNROLL(k, 0, j, `LUNROLL(n, 0, j, `LUNROLL(m, -n, n, `ifelse(eval(abs(eval(k-m)) <= abs(eval(j-n))), 1, `{
			const double sI = ifelse( eval(abs( eval((abs(k) - abs(m) - abs(eval(k-m))) % 4) )), 0, 1, -1);

			const double f =  sI * A[n][abs(m)]*A[eval(j-n)][abs(eval(k-m))] / A[j][k] * rho`'n`';
			const double reO = Ore_`'eval(j-n)_`'abs(eval(k-m));
			const double imO = ifelse( eval( k-m > 0 ), 1, `', `-') Oim_`'eval(j-n)_`'abs(eval(k-m));

			Mre_`'j`'_`'abs(k) += f * (reY_`'n`'_`'abs(m) * reO ifelse( eval( m > 0 ), 1, `-', `+') imY_`'n`'_`'abs(m) * imO);
			Mim_`'j`'_`'abs(k) += f * (reY_`'n`'_`'abs(m) * imO ifelse( eval( m > 0 ), 1, `+', `-') imY_`'n`'_`'abs(m) * reO);
		}

		')')')')')
	}

	LUNROLL(n, 0, ORDER-1, `LUNROLL(m, 0, n, `dstexp[eval((n-1) * (n+2) + 2 + m)] = reduce_add(Mre_`'n`'_`'m`');
	dstexp[eval((n-1) * (n+2) + 3 + n + m)] = reduce_add(Mim_`'n`'_`'m`');
	')')
}
