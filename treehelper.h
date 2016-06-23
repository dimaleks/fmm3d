
#pragma once

#define LMAX 10

void extent(const int N,
			const double* __restrict const x,
			const double* __restrict const y,
			const double* __restrict const z,
			double& xmin, double& ymin, double& zmin,
			double& ext);

void morton(const int N, const double* __restrict const x, const double* __restrict const y, const double* __restrict const z,
			const double xmin, const double ymin, const double zmin, const double ext, int* __restrict index);

void sort(const int N, int* __restrict index, int* __restrict keys);

void reorder(const int N,
			 const int* __restrict const keys,
			 const double* __restrict const x,
			 const double* __restrict const y,
			 const double* __restrict const z,
			 const double* __restrict const q,
			 double* __restrict xsorted,
			 double* __restrict ysorted,
			 double* __restrict zsorted,
			 double* __restrict qsorted);

void node_setup(const double xsrc[],
				const double ysrc[],
				const double zsrc[],
				const double qsrc[],
				const int nsrc,
				double& Q,
				double& xcom,
				double& ycom,
				double& zcom,
				double& radius,
				double& w);
