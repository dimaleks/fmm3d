#define EPS (10 * __DBL_EPSILON__)

export void p2p(
		uniform const double xsrc[],
		uniform const double ysrc[],
		uniform const double zsrc[],
		uniform const double qsrc[],
		uniform const int    nsrc,
		uniform const double xdst,
		uniform const double ydst,
		uniform const double zdst,
		uniform double& pot)
{

	double s = 0;
	foreach (i=0...nsrc)
	{
		const double xr = xdst - xsrc[i];
		const double yr = ydst - ysrc[i];
		const double zr = zdst - zsrc[i];

		const double r2 = xr*xr + yr*yr + zr*zr;
		const double r_2 = rsqrt(r2+EPS);
		s += (abs(r2) > EPS) ? qsrc[i] * r_2 : 0;
	}

	pot += reduce_add(s);
}

export void p2pForce(
		uniform const double xsrc[],
		uniform const double ysrc[],
		uniform const double zsrc[],
		uniform const double qsrc[],
		uniform const int    nsrc,
		uniform const double xdst,
		uniform const double ydst,
		uniform const double zdst,
		uniform double& fx,
		uniform double& fy,
		uniform double& fz)
{

	double myfx = 0, myfy = 0, myfz = 0;
	foreach (i=0...nsrc)
	{
		const double xr = xdst - xsrc[i];
		const double yr = ydst - ysrc[i];
		const double zr = zdst - zsrc[i];

		const double r2 = xr*xr + yr*yr + zr*zr;
		const double r_1 = rsqrt(r2+EPS);
		const double r_3 = r_1*r_1*r_1;

		const double F = qsrc[i] * r_3;
		myfx += xr * F;
		myfy += yr * F;
		myfz += zr * F;
	}

	fx += reduce_add(myfx);
	fy += reduce_add(myfy);
	fz += reduce_add(myfz);
}
