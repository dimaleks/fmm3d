#include <unistd.h>

#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cassert>
#include <cstring>

#include <algorithm>
#include <limits>
#include <vector>

#include "timer.h"
#include "tree.h"
#include "kernels.h"	// p2e, e2p, p2p

#define LMAX 15

double tol = 1e-8;

void check(const double * ref, const double * res, const int N)
{
	double linf = 0, l1 = 0, linf_rel = 0, l1_rel = 0;

	for(int i = 0; i < N; ++i)
	{
		assert(!std::isnan(ref[i]));
		assert(!std::isnan(res[i]));

		const double err = ref[i] - res[i];
		const double maxval = std::max(fabs(res[i]), fabs(ref[i]));
		const double relerr = err/std::max(1e-3, maxval);

		if (fabs(relerr) >= tol && fabs(err) >= tol)
			printf("%d: %e ref: %e -> %e %e\n", i, res[i], ref[i], err, relerr);

		assert(fabs(relerr) < tol || fabs(err) < tol);

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


void evaluate(const Node* nodes, const double* expansions, const double *xdata, const double *ydata, const double *mdata,
		const double thetasquared, double * const result, const double xt, const double yt)
{
	enum { BUFSIZE = 16 };

	int stack[LMAX * 3];

	int bufcount = 0;
	double rzs alignas(32) [BUFSIZE], izs alignas(32) [BUFSIZE], masses alignas(32) [BUFSIZE];
	const double *rxps[BUFSIZE], *ixps[BUFSIZE];

	int stackentry = 0, maxentry = 0;

	stack[0] = 0;
	*result = 0;
	while(stackentry > -1)
	{
		const int nodeid = stack[stackentry--];
		const Node * const node = nodes + nodeid;

		assert(nodeid < node->child_id || node->child_id == 0);

		const double r2 = (xt - node->xcom)*(xt - node->xcom) + (yt - node->ycom)*(yt - node->ycom);

		if (node->r * node->r < thetasquared * r2)
		{
			rzs[bufcount] = xt - node->xcom;
			izs[bufcount] = yt - node->ycom;
			masses[bufcount] = node->mass;
			rxps[bufcount] = expansions + ORDER * (2 * nodeid);
			ixps[bufcount] = expansions + ORDER * (2 * nodeid + 1);

			++bufcount;

			if (bufcount == BUFSIZE)
			{
				bufcount = 0;
				*result += ispc::e2p(rzs, izs, BUFSIZE, masses, rxps, ixps);
			}
		}
		else
		{            
			if (node->child_id == 0)
			{
				const int s = node->part_start;
				const int e = node->part_end;

				*result += ispc::p2p(xdata + s, ydata + s, mdata + s, e - s, xt, yt);
			}
			else
			{
				for(int c = 0; c < 4; ++c)
					stack[++stackentry] = node->child_id + c;

				maxentry = std::max(maxentry, stackentry);
			}
		}
	}

	if (bufcount)
		*result += ispc::e2p(rzs, izs, bufcount, masses, rxps, ixps);

}


void potential(double theta, double *xsrc, double *ysrc, double *qsrc, int nsrc,
			  double *xdst, double *ydst, int ndst, double *pdst)
{
	static bool maxN = 0;
	static double *xsorted = nullptr, *ysorted, *qsorted;
	static double *expansions;
	static Node   *nodes;

	const int k = 128;	// leaf capacity
	int maxnodes;

	if (maxN < nsrc)
	{
		if (xsorted != nullptr)
		{
			free(xsorted);
			free(ysorted);
			free(qsorted);
			free(nodes);
			free(expansions);
		}

		posix_memalign((void **)&xsorted, 32, sizeof(double) * nsrc);
		posix_memalign((void **)&ysorted, 32, sizeof(double) * nsrc);
		posix_memalign((void **)&qsorted, 32, sizeof(double) * nsrc);

		maxnodes = (nsrc + k - 1) / k * 10;
		posix_memalign((void **)&nodes, 32, sizeof(Node) * maxnodes);
		posix_memalign((void **)&expansions, 32, sizeof(double) * 2 * ORDER * maxnodes);
	}

	build(xsrc, ysrc, qsrc, nsrc, k, xsorted, ysorted, qsorted, nodes, expansions);

	Timer tm;
	tm.start();

	#pragma omp parallel for schedule(static,1)
	for(int i = 0; i < ndst; ++i)
		evaluate(nodes, expansions, xsorted, ysorted, qsorted,
				theta*theta, pdst + i, xdst[i], ydst[i]);
	double t = tm.elapsed();
	printf("Evaluation took %.3f ms (%.3f us per target)\n", t*1e-6, t*1e-3 / ndst);
}

void test(double theta, double tol, FILE * f = NULL, bool verify = true)
{
	int NSRC;
	fread(&NSRC, sizeof(int), 1, f);

	double *xsrc, *ysrc, *sources;
	posix_memalign((void **)&xsrc, 32, sizeof(double) * NSRC);
	posix_memalign((void **)&ysrc, 32, sizeof(double) * NSRC);
	posix_memalign((void **)&sources, 32, sizeof(double) * NSRC);

	fread(xsrc, sizeof(double), NSRC, f);
	fread(ysrc, sizeof(double), NSRC, f);
	fread(sources, sizeof(double), NSRC, f);

	int NDST;
	fread(&NDST, sizeof(int), 1, f);

	double *xdst, *ydst, *xref, *yref;
	posix_memalign((void **)&xdst, 32, sizeof(double) * NDST);
	posix_memalign((void **)&ydst, 32, sizeof(double) * NDST);
	posix_memalign((void **)&xref, 32, sizeof(double) * NDST);
	posix_memalign((void **)&yref, 32, sizeof(double) * NDST);

	fread(xdst, sizeof(double), NDST, f);
	fread(ydst, sizeof(double), NDST, f);
	fread(xref, sizeof(double), NDST, f);

	const double eps = std::numeric_limits<double>::epsilon() * 10;

	double *xtargets, *ytargets;
	posix_memalign((void **)&xtargets, 32, sizeof(double) * NDST);
	posix_memalign((void **)&ytargets, 32, sizeof(double) * NDST);

	printf("Testing %s with %d sources and %d targets (theta %.3e)...\n", "POTENTIAL", NSRC, NDST, theta);

	Timer tm;
	tm.start();
	for (int n=0; n<10; n++)
	potential(theta, xsrc, ysrc, sources, NSRC, xdst, ydst, NDST, xtargets);
	const double tpot = tm.elapsed();

	printf("\x1b[94msolved in %.2f ms\x1b[0m\n", tpot * 1e-6 / 10);

	if (verify)
	{
		const int OFFSET = 7;
		const int JUMP = 435;

#pragma omp parallel for
		for(int i = OFFSET; i < NDST; i += JUMP)
		{
			const double xd = xdst[i];
			const double yd = ydst[i];

			double s = 0;

			for(int j = 0; j < NSRC; ++j)
			{
				const double xr = xd - xsrc[j];
				const double yr = yd - ysrc[j];
				const double r2 = xr * xr + yr * yr;
				const double f  = fabs(r2) > eps;
				s += 0.5 * f * log(r2 + eps) * sources[j];
			}
			xref[i] = s;
		}

		std::vector<double> a, b, c, d;

		for(int i = OFFSET; i < NDST; i += JUMP)
		{
			a.push_back(xref[i]);
			b.push_back(xtargets[i]);
			c.push_back(yref[i]);
			d.push_back(ytargets[i]);
		}

		check(&a[0], &b[0], a.size());
	}

	free(xdst);
	free(ydst);

	free(xtargets);
	free(ytargets);

	free(xref);
	free(yref);

	free(xsrc);
	free(ysrc);
	free(sources);

	printf("TEST PASSED.\n");
}

int main(int argc, char ** argv)
{
	double theta = 0.5;
	bool verify = true;

	if (argc > 1)
		theta = atof(argv[1]);

	if (argc > 2)
		tol = atof(argv[2]);

	if (argc > 3)
		verify = strcmp(argv[3], "profile") != 0;

	char filename[256];
//	strcpy(filename, "testDiego/diegoBinaryN400");
//	strcpy(filename, "testDiego/diegoBinaryN2000");
	strcpy(filename, "testDiego/diegoBinaryN12000");

	if (access(filename, R_OK) == -1)
	{
		printf("WARNING: reference file <%s> not found.\n", filename);
		return 1;
	}
	else
		printf("reading from <%s> ...\n", filename);

	FILE * fin = fopen(filename, "r");

	assert(fin && sizeof(double) == sizeof(double));

	test(theta, tol, fin, verify);

	return 0;
}
