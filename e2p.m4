include(unroll.m4)
#include "harmonics.h"

divert(-1)
define(`feval', `syscmd( printf "%0.16fd" $(bc -l <<< "define f(x) { if(x <= 1) return (1); return (f(x-1) * x); } scale=16; print $1") )')
divert(0)

export void e2p(
		uniform const double xrel[],
		uniform const double yrel[],
		uniform const double zrel[],
		uniform const int    nexps,
		uniform const double exps[],
		uniform double& pot)
{
	double s = 0.0d;

	const uniform int niceNexps = ((nexps + 7) / 8) * 8;

	foreach(i=0...niceNexps)
	{
		const double x = xrel[i];
		const double y = yrel[i];
		const double z = zrel[i];

		// compute 1/rho
		const double xxyy  = x*x + y*y + __DBL_EPSILON__*10;
		const double rho2  = xxyy + z*z;
		const double rho_1 = rsqrt(rho2);
		const double rho   = 1.0d / rho_1;

		const double costheta = z * rho_1;
		const double sintheta = sqrt(1.0d - costheta*costheta + __DBL_EPSILON__*10);

		// phi = atan2(y, x);
		// cos_m = cos(n * phi);
		const double phiMag_1 = rsqrt(xxyy);
		double mag_1 = 1;
		double phi_x = 1;
		double phi_y = 0;
		double tmp;

		LUNROLL(n, 0, ORDER, `LUNROLL(m, 0, n, `double reY_`'n`'_`'m`';
		double imY_`'n`'_`'m`';
		')')

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
			reY_`'n`'_`'m`' = absY_`'n`'_`'m`' * cosphi_`'m;
			imY_`'n`'_`'m`' = absY_`'n`'_`'m`' * sinphi_`'m;

			')')
		}

		double factor = 2*rho_1;

		LUNROLL(n, 0, ORDER-1, `LUNROLL(m, 0, n, `
		{
			const double reM = exps[eval((n-1) * (n+2) + 2 + m)*nexps + i];
			const double imM = exps[eval((n-1) * (n+2) + 3 + n + m)*nexps + i];

			s += ifelse(m, 0, 0.5d*) factor * (reM * reY_`'n`'_`'m`' + imM * imY_`'n`'_`'m`');
		}
		')factor *= rho_1;

		')
	}

	pot += reduce_add(s);
}

#//m4exit(0)

export void e2pForce(
		uniform const double xrel[],
		uniform const double yrel[],
		uniform const double zrel[],
		uniform const int    nexps,
		uniform const double exps[],
		uniform double& fx,
		uniform double& fy,
		uniform double& fz)
{
	double locfx = 0, locfy = 0, locfz = 0;

	const uniform int niceNexps = ((nexps + 7) / 8) * 8;

	foreach(i=0...niceNexps)
	{
		double myfx = 0, myfy = 0, myfz = 0;

		const double x = xrel[i];
		const double y = yrel[i];
		const double z = zrel[i];

		// compute 1/rho
		const double xxyy  = x*x + y*y;
		const double rho2  = xxyy + z*z;
		const double rho_1 = rsqrt(rho2);
		const double rho   = 1.0 / rho_1;

		const double costheta = z * rho_1;
		const double sintheta = sqrt(1 - costheta*costheta);

		// phi = atan2(y, x);
		// cos_m = cos(n * phi);
		const double phiMag_1 = rsqrt(xxyy);
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

			const double reM = factor * exps[eval((n-1) * (n+2) + 2 + m)*nexps + i];
			const double imM = factor * exps[eval((n-1) * (n+2) + 3 + n + m)*nexps + i];

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

		myfx *= 1.0 / xxyy;
		myfy *= 1.0 / xxyy;
		myfz *= rho_1;

		locfx += myfx;
		locfy += myfy;
		locfz += myfz;

	}

	fx += reduce_add(locfx);
	fy += reduce_add(locfy);
	fz += reduce_add(locfz);
}
