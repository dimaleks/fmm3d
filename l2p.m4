include(unroll.m4)
#include "harmonics.h"

divert(-1)
define(`feval', `syscmd( printf "%0.16fd" $(bc -l <<< "define f(x) { if(x <= 1) return (1); return (f(x-1) * x); } scale=16; print $1") )')
divert(0)

export void l2p(
		uniform const double xt[],
		uniform const double yt[],
		uniform const double zt[],
		uniform const double * uniform exps[],
		uniform const int nTargets,
		uniform double pot[])
{
	foreach (i=0...nTargets)
	{
		double s = 0;

		const double x = xt[i];
		const double y = yt[i];
		const double z = zt[i];

		// compute 1/rho
		const double xxyy  = x*x + y*y;
		const double rho2  = xxyy + z*z;
		const double rho_1 = rsqrt(rho2 + __DBL_EPSILON__*10);
		const double rho   = 1.0 / rho_1;

		const double costheta = z * rho_1;
		const double sintheta = sqrt(1 - costheta*costheta);

		// phi = atan2(y, x);
		// cos_m = cos(n * phi);
		const double phiMag_1 = rsqrt(xxyy + __DBL_EPSILON__*10);
		double mag_1 = 1.0d;
		double phi_x = 1.0d;
		double phi_y = 0.0d;
		double tmp;

		LUNROLL(n, 0, ORDER, `LUNROLL(m, 0, n, `double reY_`'n`'_`'m`';
		double imY_`'n`'_`'m`';
		')')

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
			reY_`'n`'_`'m`' = absY_`'n`'_`'m`' * cosphi_`'m;
			imY_`'n`'_`'m`' = absY_`'n`'_`'m`' * sinphi_`'m;
			')')
		}

		double factor = 2.0d;

		LUNROLL(n, 0, ORDER-1, `LUNROLL(m, 0, n, `
		{
			const double reL = exps[i][eval((n-1) * (n+2) + 2 + m)];
			const double imL = exps[i][eval((n-1) * (n+2) + 3 + n + m)];

			s += ifelse(m, 0, 0.5d*) factor * (reL * reY_`'n`'_`'m`' - imL * imY_`'n`'_`'m`');
		}
		')factor *= rho;

		')

		pot[i] += s;
	}
}


export void l2pForce(
		uniform const double xrel[],
		uniform const double yrel[],
		uniform const double zrel[],
		uniform const double * uniform exps[],
		uniform const int nTargets,
		uniform double fx[],
		uniform double fy[],
		uniform double fz[])
{
	foreach(i=0...nTargets)
	{
		double myfx = 0, myfy = 0, myfz = 0;

		const double x = xrel[i];
		const double y = yrel[i];
		const double z = zrel[i];

		// compute 1/rho
		const double xxyy  = x*x + y*y;
		const double rho2  = xxyy + z*z;
		const double rho_1 = rsqrt(rho2 + __DBL_EPSILON__*10);
		const double rho   = 1.0 / rho_1;

		const double costheta = z * rho_1;
		const double sintheta = sqrt(1 - costheta*costheta);

		// phi = atan2(y, x);
		// cos_m = cos(n * phi);
		const double phiMag_1 = rsqrt(xxyy + __DBL_EPSILON__*10);
		double mag_1 = 1;
		double phi_x = 1;
		double phi_y = 0;
		double tmp;

		LUNROLL(n, 0, ORDER, `LUNROLL(m, 0, n, `double reY_`'n`'_`'m`';
		double imY_`'n`'_`'m`';
		')')

		{
			// Set up sin and cos of phi
			LUNROLL(m, 0, ORDER, `const double cosphi_`'m = phi_x * mag_1;
			const double sinphi_`'m = phi_y * mag_1;
			tmp = phi_x*x - phi_y*y;
			phi_y = phi_x*y + phi_y*x;
			phi_x = tmp;
			mag_1 *= phiMag_1;

			')

			// Precompute the harmonics
			LUNROLL(n, 0, ORDER, `LUNROLL(m, 0, n, `const double absY_`'n`'_`'m`' = Y_`'n`'_`'m`'(sintheta, costheta);
			reY_`'n`'_`'m`' = absY_`'n`'_`'m`' * cosphi_`'m;
			imY_`'n`'_`'m`' = absY_`'n`'_`'m`' * sinphi_`'m;

			')')
		}

		double factor = 2*rho_1;

		LUNROLL(n, 0, ORDER-1, `LUNROLL(m, 0, n, `
		{
			const double reYn = reY_`'n`'_`'m`';
			const double imYn = imY_`'n`'_`'m`';

			const double reYn_1 = reY_`'incr(n)`'_`'m`';
			const double imYn_1 = imY_`'incr(n)`'_`'m`';

			const double reM = factor * exps[i][eval((n-1) * (n+2) + 2 + m)];
			const double imM = factor * exps[i][eval((n-1) * (n+2) + 3 + n + m)];

			const double reYnX = reYn * x*eval(n+1) - imYn * m*y;
			const double imYnX = reYn * m*y + imYn * x*eval(n+1);

			const double reYnY = reYn * y*eval(n+1) + imYn * m*x;
			const double imYnY = imYn * y*eval(n+1) - reYn * m*x;

			const double coeff = feval( sqrt((n-m+1)*(n+m+1)) );
			const double commonXY = z*rho_1 * coeff * (reM * reYn_1 + imM * imYn_1);
			myfx += ifelse(m, 0, 0.5d*) ( reM * reYnX + imM * imYnX - x*commonXY );
			myfy += ifelse(m, 0, 0.5d*) ( reM * reYnY + imM * imYnY - y*commonXY );
			myfz += ifelse(m, 0, 0.5d*) coeff * (reM * reYn_1 + imM * imYn_1);
		}
		')factor *= rho_1;

		')

		fx[i] = myfx / xxyy;
		fy[i] = myfy / xxyy;
		fz[i] = myfz * rho_1;

	}
}
