include(unroll.m4)

divert(-1)
define(`m4abs', `ifelse(eval($1 >= 0), `1', `$1', eval(0-$1))')dnl
divert(0)dnl

#include "harmonics.h"
#include "a.h"
#include "b.h"

inline int abs(int v)
{
	return v > 0 ? v : -v;
}

inline uniform int abs(uniform int v)
{
	return v > 0 ? v : -v;
}

export void e2e(
	const uniform double xrels[],
	const uniform double yrels[],
	const uniform double zrels[],
	const uniform double srcexps[],
	double uniform dstexps[])
{
	double Mre[ORDER][ORDER];
	double Mim[ORDER][ORDER];

	LUNROLL(n, 0, ORDER-1, `LUNROLL(m, 0, n, `
	Mre[n][m] = 0;
	Mim[n][m] = 0;')')

	foreach(i=0...8)
	{
		double Ore[ORDER][ORDER];
		double Oim[ORDER][ORDER];

		double Yre[ORDER][ORDER];
		double Yim[ORDER][ORDER];

		LUNROLL(n, 0, ORDER-1, `LUNROLL(m, 0, n, `
		Ore[n][m] = srcexps[eval( ((n-1) * (n+2) + 2 + m)*8 ) + i];
		Oim[n][m] = srcexps[eval( ((n-1) * (n+2) + 3 + n + m)*8 ) + i];')')

		// Set up the arguments of the harmonic functions
		const double x = xrels[i];
		const double y = yrels[i];
		const double z = zrels[i];

		const double xxyy  = x*x + y*y;
		const double rho2  = xxyy + z*z;
		const double rho   = sqrt(rho2 + __DBL_EPSILON__*10);
		const double rho_1 = 1.0d / rho;

		const double costheta = z * rho_1;
		const double sintheta = sqrt(1.0d - costheta*costheta);

		const double phiMag_1 = rsqrt(xxyy + __DBL_EPSILON__*10);
		double mag_1 = 1.0d;
		double phi_x = 1.0d;
		double phi_y = 0.0d;
		double tmp;

		// Set up rho's
		double rhos[ORDER];
		rhos[0] = 1.0;
		rhos[1] = rho;
		rhos[2] = rho2;
		LUNROLL(n, 3, ORDER-1, `rhos[`'n`'] = rhos[decr(n)] * rho;
		')

		{
			// Set up sin and cos of phi
			LUNROLL(m, 0, ORDER-1, `
			const double cosphi_`'m = phi_x * mag_1;
			const double sinphi_`'m = phi_y * mag_1;
			tmp = phi_x*x - phi_y*y;
			phi_y = phi_x*y + phi_y*x;
			phi_x = tmp;
			mag_1 *= phiMag_1;
			')

			// Precompute the harmonics
			LUNROLL(n, 0, ORDER-1, `LUNROLL(m, 0, n, `
			const double absY_`'n`'_`'m`' = Y_`'n`'_`'m`'(sintheta, costheta);
			Yre[n][m] = absY_`'n`'_`'m`' * cosphi_`'m;
			Yim[n][m] = absY_`'n`'_`'m`' * sinphi_`'m;
			')')
		}

		// Now begin translations
		//
		// First double loop with k and j
		// Second, with n and m, unrolled

		for (uniform int j=0; j<ORDER; j++)
		{
			for (uniform int k=0; k<=j; k++)
			{
				LUNROLL(n, 0, ORDER-1, `LUNROLL(m, -n, n, `
				if (abs(m-k) <= j-n && n <= j)
				{
					const double f = ( (abs(k) - abs(m) - abs(k-(m))) % 4 == 0 ? 1 : -1 ) *
									A[j-n][abs(k-(m))] * A[n][m4abs(m)] * B[j][k] * rhos[n];

					const double reO = Ore[j-n][abs(k-(m))];
					const double imO = (k-(m) > 0) ? Oim[j-n][abs(k-(m))] : -Oim[j-n][abs(k-(m))];

					const double reY = Yre[n][abs(m)];
					const double imY = ifelse( eval( m > 0 ), 1, `', `-') Yim[n][abs(m)];

					Mre[j][k] += f * (reY*reO - imY*imO);
					Mim[j][k] += f * (reY*imO + imY*reO);
				}
				')')
			}
		}
	}

	LUNROLL(n, 0, ORDER-1, `LUNROLL(m, 0, n, `
	dstexps[eval( (n-1) * (n+2) + 2 + m )]     = reduce_add(Mre[n][m]);
	dstexps[eval( (n-1) * (n+2) + 3 + n + m )] = reduce_add(Mim[n][m]);
	')')
}
