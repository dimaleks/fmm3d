#include <unistd.h>

#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cassert>
#include <cstring>

#include <algorithm>
#include <limits>
#include <vector>

#include <immintrin.h>

#include "fmm.h"
#include "profiler.h"

double tol = 1e-8;

void check(const double * ref, const double * res, const int N)
{
	double linf = 0, l1 = 0, linf_rel = 0, l1_rel = 0;

	printf("\nChecking...\n");
	for(int i = 0; i < N; ++i)
	{
		assert(!std::isnan(ref[i]));
		assert(!std::isnan(res[i]));

		const double err = ref[i] - res[i];
		const double maxval = std::max(fabs(res[i]), fabs(ref[i]));
		const double relerr = err/std::max(1e-3, maxval);

//		if (fabs(relerr) >= tol && fabs(err) >= tol)
//			printf("%3d: %16.8e vs %16.8e     err:    %16.8e %16.8e\n", i, res[i], ref[i], err, relerr);

		l1 += fabs(err);
		l1_rel += fabs(relerr);

		linf = std::max(linf, fabs(err));
		linf_rel = std::max(linf_rel, fabs(relerr));
	}

	l1 /= N;
	l1_rel /= N;

	printf("l-infinity errors: %.03e (absolute) %.03e (relative)\n", linf, linf_rel);
	printf("       l-1 errors: %.03e (absolute) %.03e (relative)\n", l1, l1_rel);
}


void test(double theta, double tol, bool verify = true)
{
	const int nsrc = 3000;
	double *xsrc, *ysrc, *zsrc, *qsrc;

	posix_memalign((void **)&xsrc, 32, sizeof(double) * nsrc);
	posix_memalign((void **)&ysrc, 32, sizeof(double) * nsrc);
	posix_memalign((void **)&zsrc, 32, sizeof(double) * nsrc);
	posix_memalign((void **)&qsrc, 32, sizeof(double) * nsrc);

	for (int i=0; i<nsrc; i++)
	{
		xsrc[i] = drand48() - 0.5;
		ysrc[i] = drand48() - 0.5;
		zsrc[i] = drand48() - 0.5;

//		double l = (drand48() - 0.5) * 1.4142;
//		xsrc[i] = l + (drand48() - 0.5) * 0.01;
//		ysrc[i] = l + (drand48() - 0.5) * 0.01;
//		zsrc[i] = l + (drand48() - 0.5) * 0.01;

		qsrc[i] = 0.1*(drand48() - 0.5);
	}
	xsrc[0] = 0.5;
	ysrc[0] = 0.5;
	zsrc[0] = 0.5;

	xsrc[1] = -0.5;
	ysrc[1] = -0.5;
	zsrc[1] = -0.5;

	int ndst = 3000;
	double *xdst, *ydst, *zdst;
	double *xfrc,  *yfrc,  *zfrc,  *potentials;
	double *xfrcL, *yfrcL, *zfrcL, *potentialsL;
	posix_memalign((void **)&xdst, 32, sizeof(double) * ndst);
	posix_memalign((void **)&ydst, 32, sizeof(double) * ndst);
	posix_memalign((void **)&zdst, 32, sizeof(double) * ndst);

	posix_memalign((void **)&xfrc,  32, sizeof(double) * ndst);
	posix_memalign((void **)&yfrc,  32, sizeof(double) * ndst);
	posix_memalign((void **)&zfrc,  32, sizeof(double) * ndst);
	posix_memalign((void **)&xfrcL, 32, sizeof(double) * ndst);
	posix_memalign((void **)&yfrcL, 32, sizeof(double) * ndst);
	posix_memalign((void **)&zfrcL, 32, sizeof(double) * ndst);

	posix_memalign((void **)&potentials,  32, sizeof(double) * ndst);
	posix_memalign((void **)&potentialsL, 32, sizeof(double) * ndst);

	for (int i=0; i<ndst; i++)
	{
		xdst[i] = drand48() - 0.5;
		ydst[i] = drand48() - 0.5;
		zdst[i] = drand48() - 0.5;
	}

	const double eps = std::numeric_limits<double>::epsilon() * 10;


	printf("Testing %s with %d sources and %d targets (theta %.3e)...\n", "POTENTIAL", nsrc, ndst, theta);

	FMM3D fmm(0.5, 100);
	const int iters = 2;
	for (int n=0; n<iters; n++)
	{
		fmm.buildTree(nsrc, xsrc, ysrc, zsrc, qsrc);
		fmm.potential(ndst, xdst, ydst, zdst, potentials);
		fmm.potentialLog(ndst, xdst, ydst, zdst, potentialsL);
		
		fmm.force(ndst, xdst, ydst, zdst, xfrc, yfrc, zfrc);
		fmm.forceLog(ndst, xdst, ydst, zdst, xfrcL, yfrcL, zfrcL);
	}

	double usppot = fmm.profiler.elapsed("Potential", Profiler::Unit::us) / ndst;
	double uspfrc = fmm.profiler.elapsed("Force", Profiler::Unit::us) / ndst;
	printf("%s", fmm.profiler.printStatAndReset().c_str());
	printf("Time per potential: %.2f us\n", usppot);
	printf("Time per force    : %.2f us\n", uspfrc);
	printf("Average p2p particles: %.1f,  average e2p evals: %.1f",
			(double)fmm.np2p / iters / ndst, (double)fmm.ne2p / iters / ndst);

	if (verify)
	{
		double *pref, *xref, *yref, *zref;
		posix_memalign((void **)&pref, 32, sizeof(double) * ndst);
		posix_memalign((void **)&xref, 32, sizeof(double) * ndst);
		posix_memalign((void **)&yref, 32, sizeof(double) * ndst);
		posix_memalign((void **)&zref, 32, sizeof(double) * ndst);

		const int OFFSET = 0;
		const int JUMP = 433;

#pragma omp parallel for
		for(int i = OFFSET; i < ndst; i += JUMP)
		{
			const double xd = xdst[i];
			const double yd = ydst[i];
			const double zd = zdst[i];

			double s = 0;
			double sx = 0, sy = 0, sz = 0;

			for(int j = 0; j < nsrc; ++j)
			{
				const double xr = xd - xsrc[j];
				const double yr = yd - ysrc[j];
				const double zr = zd - zsrc[j];
				const double r2 = xr*xr + yr*yr + zr*zr;

				double p = qsrc[j] / sqrt(r2+eps);
				s += (fabs(r2) > eps) ? p : 0;

				p /= r2;
				sx += p * xr;
				sy += p * yr;
				sz += p * zr;
			}
			pref[i] = s;
			xref[i] = sx;
			yref[i] = sy;
			zref[i] = sz;
		}

		std::vector<double> p, pl, pr, x, xl, xr, y, yl, yr, z, zl, zr;

		for(int i = OFFSET; i < ndst; i += JUMP)
		{
			pr.push_back(pref[i]);
			p .push_back(potentials[i]);
			pl.push_back(potentialsL[i]);

			xr.push_back(xref[i]);
			x .push_back(xfrc[i]);
			xl.push_back(xfrcL[i]);

			yr.push_back(yref[i]);
			y .push_back(yfrc[i]);
			yl.push_back(yfrcL[i]);

			zr.push_back(zref[i]);
			z .push_back(zfrc[i]);
			zl.push_back(zfrcL[i]);
		}

		check(&pr[0], &p[0], p.size());
		check(&xr[0], &x[0], p.size());
		check(&yr[0], &y[0], p.size());
		check(&zr[0], &z[0], p.size());
		
		check(&pr[0], &pl[0], p.size());
		check(&xr[0], &xl[0], p.size());
		check(&yr[0], &yl[0], p.size());
		check(&zr[0], &zl[0], p.size());

		free(pref);
		free(xref);
		free(yref);
		free(zref);
	}

	free(xdst);
	free(ydst);
	free(zdst);
	free(potentials);

	free(xsrc);
	free(ysrc);
	free(zsrc);
	free(qsrc);
}

int main(int argc, char ** argv)
{
	double theta = 0.5;
	bool verify = true;

	_mm_setcsr( _mm_getcsr() | (1<<15) | (1<<6));

	if (argc > 1)
		theta = atof(argv[1]);

	if (argc > 2)
		tol = atof(argv[2]);

	if (argc > 3)
		verify = strcmp(argv[3], "profile") != 0;

	test(theta, tol, verify);

	return 0;
}
