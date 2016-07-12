#define LMAX 10

export void minmax( uniform const int N,
					uniform const double x[],
					uniform const double y[],
					uniform const double z[],
					uniform double& xmin,
					uniform double& xmax,
					uniform double& ymin,
					uniform double& ymax,
					uniform double& zmin,
					uniform double& zmax)
{
	double myxmin = 1e100, myxmax = -1e100;
	double myymin = 1e100, myymax = -1e100;
	double myzmin = 1e100, myzmax = -1e100;

	foreach(i=0...N)
	{
		myxmin = min(myxmin, x[i]);
		myxmax = max(myxmax, x[i]);
	}
	xmin = reduce_min(myxmin);
	xmax = reduce_max(myxmax);

	foreach(i=0...N)
	{
		myymin = min(myymin, y[i]);
		myymax = max(myymax, y[i]);
	}
	ymin = reduce_min(myymin);
	ymax = reduce_max(myymax);

	foreach(i=0...N)
	{
		myzmin = min(myzmin, z[i]);
		myzmax = max(myzmax, z[i]);
	}
	zmin = reduce_min(myzmin);
	zmax = reduce_max(myzmax);
}


export void node_setup( uniform const double xs[],
						uniform const double ys[],
						uniform const double zs[],
						uniform const double qs[],
						uniform const int n,
						uniform double& Q,
						uniform double& xcom,
						uniform double& ycom,
						uniform double& zcom,
						uniform double& radius,
						uniform double& weight)
{
	double myw = 10 * __DBL_EPSILON__, myxsum = 0, myysum = 0, myzsum = 0, myq = 0;

	foreach (i=0...n)
	{
		const double x = xs[i];
		const double y = ys[i];
		const double z = zs[i];
		const double q = qs[i];
		const double w = abs(q);

		myq += q;
		myw += w;
		myxsum += x * w;
		myysum += y * w;
		myzsum += z * w;
	}

	Q = reduce_add(myq);
	weight = reduce_add(myw);
	xcom = reduce_add(myxsum) / weight;
	ycom = reduce_add(myysum) / weight;
	zcom = reduce_add(myzsum) / weight;

	double r2 = 0;
	foreach (i=0...n)
	{
		const double xr = xs[i] - xcom;
		const double yr = ys[i] - ycom;
		const double zr = zs[i] - zcom;

		r2 = max(r2, xr * xr + yr * yr + zr * zr);
	}

	radius = sqrt(reduce_max(r2));
}

inline int morton3D_SplitBy3bits(const int a)
{
	int x = a;
	x = x               & 0x000003ff;
	x = (x | (x << 16)) & 0xff0000ff;
	x = (x | (x << 8))  & 0x0300f00f;
	x = (x | (x << 4))  & 0x030c30c3;
	x = (x | (x << 2))  & 0x09249249;

	return x;
}

task unmasked void morton_int(	uniform const int N,
								uniform const double x[],
								uniform const double y[],
								uniform const double z[],
								uniform const double xmin,
								uniform const double ymin,
								uniform const double zmin,
								uniform const double ext,
								uniform int index[])
{
	// https://github.com/Forceflow/libmorton
	const uniform double factor = 1.0 / ext * (1 << LMAX);

	const uniform int s = (taskIndex * N) / taskCount;
	const uniform int e = min( (int) ( ((taskIndex+1) * N) / taskCount ), N);

	foreach(i=s...e)
	{
		int xid = floor((x[i] - xmin) * factor);
		int yid = floor((y[i] - ymin) * factor);
		int zid = floor((z[i] - ymin) * factor);

		index[i] = morton3D_SplitBy3bits(xid) | (morton3D_SplitBy3bits(yid) << 1) | (morton3D_SplitBy3bits(zid) << 2);
	}
}

export void morton(uniform const int N, uniform const double x[], uniform const double y[], uniform const double z[],
			uniform const double xmin, uniform const double ymin, uniform const double zmin, uniform const double ext,
			uniform int index[], uniform const int ntasks)
{
	uniform const int myntasks = N > 10000 ? ntasks : 1;

	launch[myntasks] morton_int(N, x, y, z, xmin, ymin, zmin, ext, index);
}



