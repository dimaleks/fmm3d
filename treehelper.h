
#pragma once

#define LMAX 15

void extent(const int N, const double* const x, const double* const y,
			double& xmin, double& ymin, double& ext);

void morton(const int N, const double* __restrict const x, const double* __restrict const y,
			const double xmin, const double ymin, const double ext, int* __restrict index);

void sort(const int N, int* index, int* keys);

void reorder(const int N,
			 const int* __restrict const keys,
			 const double* __restrict const x,
			 const double* __restrict const y,
			 const double* __restrict const q,
			 double* __restrict xsorted,
			 double* __restrict ysorted,
			 double* __restrict qsorted);

void node_setup(const double xsources[],
				const double ysources[],
				const double msources[],
				const int nsources,
				double& mass,
				double& xcom,
				double& ycom,
				double& radius,
				double& w);
