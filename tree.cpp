#include <cstdio>
#include <cstdlib>
#include <algorithm>
//#include "tree_prepare.h"
#include "treehelper.h"

#include "timer.h"

#include <cassert>
#include <cmath>

#include <limits>

#include "tree.h"
#include "kernels.h"

#include <omp.h>

#define EXPSIZE  (ORDER * (ORDER+3) + 2)

class TreeBuilder
{
	Node   *nodes;
	double *expansions;

	int    maxnodes;
	double *xdata, *ydata, *zdata, *qdata;
	int    *keydata;
	int K;
	
public:
	
	int currnnodes;

	TreeBuilder(Node* nodes, int maxnodes,
				double *xdata, double *ydata, double* zdata, double *qdata, int *keydata,
				int K, double *expansions) :
		nodes(nodes), maxnodes(maxnodes),
		xdata(xdata), ydata(ydata), zdata(zdata), qdata(qdata), keydata(keydata),
		K(K), currnnodes(1), expansions(expansions)
	{};
	
	void build_tree(const int nodeid);
};


void TreeBuilder::build_tree(const int nodeid)
{
	static const int nchildren = 8;

	Node * const node = nodes + nodeid;

	const int s = node->part_start;
	const int e = node->part_end;
	const int l = node->level;
	const int mId = node->morton_id;
	const bool leaf = e - s <= K || l + 1 > LMAX;
	

	if (leaf)
	{
		node_setup(xdata + s, ydata + s, zdata + s, qdata + s, e - s,
					node->Q, node->xcom, node->ycom, node->zcom, node->r, node->w);
		ispc::p2e(xdata + s, ydata + s, zdata + s, qdata + s, e - s,
				  node->xcom, node->ycom, node->zcom, expansions + nodeid*EXPSIZE);
	}
	else
	{
		int childbase;
		#pragma omp atomic capture
		{
			childbase = currnnodes; currnnodes += nchildren;
		}
		assert(nodeid < childbase);
		assert(childbase + nchildren < maxnodes);
		
		node->child_id = childbase;
	
		for(int c = 0; c < nchildren; ++c)
		{
			const int shift = 3 * (LMAX - l - 1);

			const int key1 = mId | (c << shift);
			const int key2 = key1 + (1 << shift) - 1;
	
			const size_t indexmin = s + c == 0               ? s : std::lower_bound(keydata+s, keydata+e, key1) - keydata;
			const size_t indexsup = s + c == (nchildren - 1) ? e : std::upper_bound(keydata+s, keydata+e, key2) - keydata;

			const int chId = childbase + c;

			nodes[chId].setup(indexmin, indexsup, l + 1, key1);
		
#pragma omp task firstprivate(chId) if (indexsup - indexmin > 5e4 && c < 3)
			{
				build_tree(chId);
			}
		}

		double Q = 0, xsum = 0, ysum = 0, zsum = 0, w = 0, r = 0;

		double xrels alignas(32) [nchildren];
		double yrels alignas(32) [nchildren];
		double zrels alignas(32) [nchildren];
		double qs    alignas(32) [nchildren];
		const double *exps[nchildren];

#pragma omp taskwait
		for(int c = 0; c < nchildren; ++c)
		{
			const int chId = childbase + c;
			Node *child = nodes+chId;

			Q += child->Q;
			xsum += child->xcom * child->w;
			ysum += child->ycom * child->w;
			zsum += child->zcom * child->w;
			w += child->w;
		}
		node->Q = Q;
		node->xcom = xsum / w;
		node->ycom = ysum / w;
		node->zcom = zsum / w;
		node->w = w;

		for(int c = 0; c < nchildren; ++c)
		{
			const int chId = childbase + c;
			Node *child = nodes+chId;

			qs[c]    = child->Q;
			xrels[c] = child->xcom - node->xcom;
			yrels[c] = child->ycom - node->ycom;
			zrels[c] = child->zcom - node->zcom;
			exps[c]  = expansions + chId*EXPSIZE;

			r = std::max(r, sqrt(xrels[c]*xrels[c] + yrels[c]*yrels[c] + zrels[c]*zrels[c]) + child->r);
		}
		node->r = r;

		node_setup(xdata + s, ydata + s, zdata + s, qdata + s, e - s,
							node->Q, node->xcom, node->ycom, node->zcom, node->r, node->w);

		ispc::p2e(xdata + s, ydata + s, zdata + s, qdata + s, e - s,
				  node->xcom, node->ycom, node->zcom, expansions + nodeid*EXPSIZE);
//		for (int k=0; k<ORDER; k++)
//			printf("%e  ", *(expansions + 2*nodeid*ORDER + k));
//		printf("\n");

		//ispc::e2e(xrels, yrels, zrels, qs, exps, expansions + nodeid*ORDER*ORDER);
//		for (int k=0; k<ORDER; k++)
//			printf("%e  ", *(expansions + 2*nodeid*ORDER + k));
//		printf("\n\n\n");
	}
}

// n = nsrc, k = max leaf capacity
void build(	const double* __restrict const xs,
			const double* __restrict const ys,
			const double* __restrict const zs,
			const double* __restrict const qs,
			const int n, const int k, const int maxnodes,
			double* __restrict xsorted,
			double* __restrict ysorted,
			double* __restrict zsorted,
			double* __restrict qsorted,
			Node*   __restrict nodes,
			double* __restrict expansions)
{
	static int maxN = 0;
	static int *index = nullptr, *keys;

	if (maxN < n)
	{
		if (index != nullptr)
		{
			free(index);
			free(keys);
		}

		posix_memalign((void **)&index, 32, sizeof(int) * n);
		posix_memalign((void **)&keys,  32, sizeof(int) * n);
		maxN = n;
	}

	Timer tm;
	double exTm, morTm, sorTm, reoTm, bldTm;
	double ext, xmin, ymin, zmin;

	#pragma omp parallel for	
	for (int i=0; i<n; i++)
		keys[i] = i;

	tm.start();
	extent(n, xs, ys, zs, xmin, ymin, zmin, ext);
	exTm = 1e-6 * tm.elapsedAndReset();
	
	morton(n, xs, ys, zs, xmin, ymin, zmin, ext, index);
	morTm = 1e-6 * tm.elapsedAndReset();
	
	sort(n, index, keys);
	sorTm = 1e-6 * tm.elapsedAndReset();
	
	reorder(n, keys, xs, ys, zs, qs, xsorted, ysorted, zsorted, qsorted);
	reoTm = 1e-6 * tm.elapsed();

	if (n <= 100)
		for (int i=0; i<n; i++)
			printf("%2d : coordinates = [%6f %6f %6f], ind = %x\n", i, xsorted[i], ysorted[i], zsorted[i], index[i]);

	auto builder = new TreeBuilder(nodes, maxnodes,
						xsorted, ysorted, zsorted, qsorted, index, k, expansions);

	tm.start();
	#pragma omp parallel
	#pragma omp single nowait
	{
		nodes[0].setup(0, n, 0, 0);
		builder->build_tree(0);
	}
	bldTm = 1e-6 * tm.elapsed();

	printf("TIME for N = %d (%d nodes)  is  %6.2f ms\n", n, builder->currnnodes, exTm+morTm+sorTm+reoTm+bldTm);
	printf("\textent: %6.2f ms\n\tmorton: %6.2f ms\n\tsorting: %6.2f ms\n\treordering: %6.2f ms\n\tbuilding: %6.2f ms\n",
			exTm, morTm, sorTm, reoTm, bldTm);
}
