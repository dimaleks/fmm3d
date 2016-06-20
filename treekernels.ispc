#define LMAX 15

export void minmax( uniform const int N,
					uniform const double x[],
					uniform const double y[],
					uniform double& xmin,
					uniform double& xmax,
					uniform double& ymin,
					uniform double& ymax)
{
	double myxmin = 1e100, myxmax = -1e100;
	double myymin = 1e100, myymax = -1e100;

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
}

export void node_setup( uniform const double xsources[],
						uniform const double ysources[],
						uniform const double msources[],
						uniform const int nsources,
						uniform double& mass,
						uniform double& xcom,
						uniform double& ycom,
						uniform double& radius,
						uniform double& weight)
{
	double myw = 0, myxsum = 0, myysum = 0, mymass = 0;

	foreach (i=0...nsources)
	{
		const double x = xsources[i];
		const double y = ysources[i];
		const double m = msources[i];
		const double w = abs(m);

		mymass += m;
		myw += w;
		myxsum += x * w;
		myysum += y * w;
	}

	mass = reduce_add(mymass);
	weight = reduce_add(myw);
	xcom = reduce_add(myxsum) / weight;
	ycom = reduce_add(myysum) / weight;

	double r2 = 0;
	foreach (i=0...nsources)
	{
		const double xr = xsources[i] - xcom;
		const double yr = ysources[i] - ycom;

		r2 = max(r2, xr * xr + yr * yr);
	}

	radius = sqrt(reduce_max(r2));
}

task unmasked void morton_int(uniform const int N, uniform const double x[], uniform const double y[],
					 uniform const double xmin, uniform const double ymin, uniform const double ext, uniform int index[])
{
	const uniform double factor = 1.0 / ext * (1 << LMAX);

	const uniform int s = (taskIndex * N) / taskCount;
	const uniform int e = min( (int) ( ((taskIndex+1) * N) / taskCount ), N);

	foreach(i=s...e)
	{
		int xid = floor((x[i] - xmin) * factor);
		int yid = floor((y[i] - ymin) * factor);

		xid = (xid | (xid << 8)) & 0x00FF00FF;
		xid = (xid | (xid << 4)) & 0x0F0F0F0F;
		xid = (xid | (xid << 2)) & 0x33333333;
		xid = (xid | (xid << 1)) & 0x55555555;

		yid = (yid | (yid << 8)) & 0x00FF00FF;
		yid = (yid | (yid << 4)) & 0x0F0F0F0F;
		yid = (yid | (yid << 2)) & 0x33333333;
		yid = (yid | (yid << 1)) & 0x55555555;

		index[i] = xid | (yid << 1);
	}
}

export void morton(uniform const int N, uniform const double x[], uniform const double y[],
			uniform const double xmin, uniform const double ymin, uniform const double ext, uniform int index[], uniform const int ntasks)
{
	launch[ntasks] morton_int(N, x, y, xmin, ymin, ext, index);
}



