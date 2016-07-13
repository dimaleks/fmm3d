include(unroll.m4)

divert(-1)
define(`m4abs', `ifelse(eval($1 >= 0), `1', `$1', eval(0-$1))')dnl
define(`feval', `syscmd( bc -l <<< "define f(x) { if(x <= 1) return (1); return (f(x-1) * x); } scale=20; print $1") ')
divert(0)dnl

#include "harmonics.h"
#include "a.h"
//#include <cstdlib>

inline int abs(int v)
{
	return v > 0 ? v : -v;
}

inline uniform int abs(uniform int v)
{
	return v > 0 ? v : -v;
}

export void e2l(
	const uniform double xrels[],
	const uniform double yrels[],
	const uniform double zrels[],
	const uniform double srcexps[],
	double uniform dstexps[])
{
	foreach(i=0...8)
	{
		double Lre[ORDER][ORDER];
		double Lim[ORDER][ORDER];

		double Ore[ORDER][ORDER];
		double Oim[ORDER][ORDER];

		double Yre[2*ORDER-1][2*ORDER-1];
		double Yim[2*ORDER-1][2*ORDER-1];

		LUNROLL(n, 0, ORDER-1, `LUNROLL(m, 0, n, `
		Lre[`'n`']['`m'`] = 0;
		Lim[`'n`']['`m'`] = 0;')')

		LUNROLL(n, 0, ORDER-1, `LUNROLL(m, 0, n, `
		Ore[`'n`']['`m'`] = srcexps[eval( ((n-1) * (n+2) + 2 + m)*8 ) + i];
		Oim[`'n`']['`m'`] = srcexps[eval( ((n-1) * (n+2) + 3 + n + m)*8 ) + i];')')

		// Set up the arguments of the harmonic functions
		const double x = xrels[i];
		const double y = yrels[i];
		const double z = zrels[i];

		const double xxyy  = x*x + y*y;
		const double rho2  = xxyy + z*z;
		const double rho   = sqrt(rho2);
		const double rho_1 = 1.0d / rho;

		const double costheta = z * rho_1;
		const double sintheta = sqrt(1.0d - costheta*costheta);

		const double phiMag_1 = rsqrt(xxyy);
		double mag_1 = (1.0d);
		double phi_x = (1.0d);
		double phi_y = (0.0d);
		double tmp;

		// Set up rho's
		double rhos[2*ORDER];
		rhos[0] = (1.0);
		rhos[1] = rho_1;

		LUNROLL(n, 2, 2*ORDER-1, `rhos[`'n`'] = rhos[decr(n)] * rho_1;
		')

		{
			// Set up sin and cos of phi
			LUNROLL(m, 0, 2*ORDER-2, `
			const double cosphi_`'m = phi_x * mag_1;
			const double sinphi_`'m = phi_y * mag_1;
			tmp = phi_x*x - phi_y*y;
			phi_y = phi_x*y + phi_y*x;
			phi_x = tmp;
			mag_1 *= phiMag_1;
			')

			// Precompute the harmonics
			LUNROLL(n, 0, 2*ORDER-2, `LUNROLL(m, 0, n, `
			const double absY_`'n`'_`'m`' = Y_`'n`'_`'m`'(sintheta, costheta);
			Yre[`'n`'][`'m`'] = absY_`'n`'_`'m`' * cosphi_`'m;
			Yim[`'n`'][`'m`'] = absY_`'n`'_`'m`' * sinphi_`'m;
			')')
		}

		// Now begin conversion to local
		//
		// First double loop with k and j
		// Second - with n and m

		for (uniform int j=0; j<ORDER; j++)
		{
			for (uniform int k=0; k<=j; k++)
			{
				LUNROLL(n, 0, ORDER-1, `LUNROLL(m, -n, n, `
				if (abs(m-k) <= abs(j+n))
				{
					const double f =
							( (abs(k-(m)) - abs(k) - abs(m)) % 4 == 0 ? 1 : -1 ) * ifelse( eval(n % 2), 0, 1, -1 ) *
							A[j][k] * A[n][m4abs(m)] / A[j+n][abs(m-k)] * rhos[j+n+1];

					const double reO = ifelse( eval( m % 2 ), -1, `-', `') Ore[`'n`'][`'m4abs(m)`'];
					const double imO = ifelse( eval( m < 0 && m % 2 == 0 ), 1, `-', `') Oim[`'n`'][`'m4abs(m)`'];

					const double reY = ((m-k) % 2 == -1) ? -Yre[j+n][abs(m-k)] : Yre[j+n][abs(m-k)];
					const double imY = ((m-k) < 0 && (m-k) % 2 == 0) ? Yim[j+n][abs(m-k)] : -Yim[j+n][abs(m-k)];

					Lre[j][k] += f * (reY*reO - imY*imO);
					Lim[j][k] += f * (reY*imO + imY*reO);
				}
				')')
			}
		}

		LUNROLL(n, 0, ORDER-1, `LUNROLL(m, 0, n, `
		dstexps[eval( ((n-1) * (n+2) + 2 + m)*8) + i]     = Lre[`'n`'][`'m`'];
		dstexps[eval( ((n-1) * (n+2) + 3 + n + m)*8) + i] = Lim[`'n`'][`'m`'];
		')')
	}
}