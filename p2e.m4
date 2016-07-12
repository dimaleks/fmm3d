include(unroll.m4)
#include "harmonics.h"

export void p2e(
		uniform const   double xsrc[],
		uniform const   double ysrc[],
		uniform const   double zsrc[],
		uniform const   double qsrc[],
		uniform const   int nsrc,
		uniform const   double xcom,
		uniform const   double ycom,
		uniform const   double zcom,
		uniform double  expansion[])
{

	LUNROLL(n, 0, ORDER-1, `double substr(echo(LUNROLL(m, 0, n, `, Mre_`'n`'_`'m = 0');), `1')'
	)
	LUNROLL(n, 0, ORDER-1, `double substr(echo(LUNROLL(m, 0, n, `, Mim_`'n`'_`'m = 0');), `1')'
	)

	foreach (k=0 ... nsrc)
	{
		const double x = xsrc[k] - xcom;
		const double y = ysrc[k] - ycom;
		const double z = zsrc[k] - zcom;
		const double q = qsrc[k];

		// compute 1/rho = rho_1 and rho = rho^2 * rho^-1
		const double xxyy  = x*x + y*y;
		const double rho2  = xxyy + z*z;
		const double rho_1 = rsqrt(rho2);
		const double rho   = 1.0 / rho_1;

		const double costheta = z * rho_1;
		const double sintheta = sqrt(1 - costheta*costheta);
		double factor = q;

		// phi = atan2(y, x);
		// cos_m = cos(n * phi);
		const double phiMag_1 = rsqrt(xxyy);
		double mag_1 = 1;
		double phi_x = 1;
		double phi_y = 0;
		double tmp;

		LUNROLL(m, 0, ORDER-1, `const double cosphi_`'m = phi_x * mag_1;
		const double sinphi_`'m = phi_y * mag_1;
		tmp = phi_x*x - phi_y*y;
		phi_y = phi_x*y + phi_y*x;
		phi_x = tmp;
		mag_1 *= phiMag_1;

		')

		Mre_0_0 += factor;
		factor *= rho;

		LUNROLL(n, 1, ORDER-1, `LUNROLL(m, 0, n, `const double tmp_`'n`'_`'m = factor * Y_`'n`'_`'m`'(sintheta, costheta);
		Mre_`'n`'_`'m`' += tmp_`'n`'_`'m * cosphi_`'m;
		Mim_`'n`'_`'m`' += tmp_`'n`'_`'m * sinphi_`'m;

		')factor *= rho;

		')
	}

	LUNROLL(n, 0, ORDER-1, `LUNROLL(m, 0, n, `expansion[eval((n-1) * (n+2) + 2 + m)] = reduce_add(Mre_`'n`'_`'m`');
	')LUNROLL(m, 0, n, `expansion[eval((n-1) * (n+2) + 3 + n + m)] = reduce_add(Mim_`'n`'_`'m`');
	')
	')
}
