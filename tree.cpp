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

class TreeBuilder
{
	Node   *nodes;
	double *expansions;

	int    maxnodes;
	double *xdata, *ydata, *mdata;
	int    *keydata;
	int K;
	
public:
	
	int currnnodes;

	TreeBuilder(Node* nodes, int maxnodes,
				double *xdata, double *ydata, double *mdata, int *keydata,
				double ext, double xmin, double ymin, int K, double *expansions) :
		nodes(nodes), maxnodes(maxnodes),
		xdata(xdata), ydata(ydata), mdata(mdata), keydata(keydata),
		K(K), currnnodes(1), expansions(expansions)
	{};
	
	void build_tree(const int nodeid);
};


void TreeBuilder::build_tree(const int nodeid)
{
	Node * const node = nodes + nodeid;

	const int s = node->part_start;
	const int e = node->part_end;
	const int l = node->level;
	const int mId = node->morton_id;
	const bool leaf = e - s <= K || l + 1 > LMAX;
	

	if (leaf)
	{
		node_setup(xdata + s, ydata + s, mdata + s, e - s,
					node->mass, node->xcom, node->ycom, node->r, node->w);
		ispc::p2e(xdata + s, ydata + s, mdata + s, e - s, node->xcom, node->ycom,
				expansions + 2*nodeid*ORDER, expansions + 2*nodeid*ORDER + ORDER);
	}
	else
	{
		int childbase;
		#pragma omp atomic capture
		{
			childbase = currnnodes; currnnodes += 4;
		}
		assert(nodeid < childbase);
		assert(childbase + 4 < maxnodes);
		
		node->child_id = childbase;
	
		for(int c = 0; c < 4; ++c)
		{
			const int shift = 2 * (LMAX - l - 1);

			const int key1 = mId | (c << shift);
			const int key2 = key1 + (1 << shift) - 1;
	
			const size_t indexmin = s + c == 0 ? s : std::lower_bound(keydata+s, keydata+e, key1) - keydata;
			const size_t indexsup = s + c == 3 ? e : std::upper_bound(keydata+s, keydata+e, key2) - keydata;

			const int chId = childbase + c;

			nodes[chId].setup(indexmin, indexsup, l + 1, key1);
		
#pragma omp task firstprivate(chId) if (indexsup - indexmin > 5e4 && c < 3)
			{
				build_tree(chId);
			}
		}

		double m = 0, xsum = 0, ysum = 0, w = 0, r = 0;
		double xrels[4], yrels[4], masses[4];
		const double *rexps[4], *iexps[4];

#pragma omp taskwait
		for(int c = 0; c < 4; ++c)
		{
			const int chId = childbase + c;
			Node *child = nodes+chId;

			m += child->mass;
			xsum += child->xcom * child->w;
			ysum += child->ycom * child->w;
			w += child->w;
		}
		node->mass = m;
		node->xcom = xsum / w;
		node->ycom = ysum / w;
		node->w = w;

		for(int c = 0; c < 4; ++c)
		{
			const int chId = childbase + c;
			Node *child = nodes+chId;

			masses[c] = child->mass;
			xrels[c] = child->xcom - node->xcom;
			yrels[c] = child->ycom - node->ycom;
			rexps[c] = expansions + 2*chId*ORDER;
			iexps[c] = rexps[c] + ORDER;

			r = std::max(r, sqrt(xrels[c]*xrels[c] + yrels[c]*yrels[c]) + child->r);
		}
		node->r = r;


//		ispc::p2e(xdata + s, ydata + s, mdata + s, e - s, node->xcom, node->ycom,
//						expansions + 2*nodeid*ORDER, expansions + 2*nodeid*ORDER + ORDER);
//		for (int k=0; k<ORDER; k++)
//			printf("%e  ", *(expansions + 2*nodeid*ORDER + k));
//		printf("\n");

		ispc::e2e(xrels, yrels, masses, rexps, iexps, expansions + 2*nodeid*ORDER, expansions + 2*nodeid*ORDER + ORDER);
//		for (int k=0; k<ORDER; k++)
//			printf("%e  ", *(expansions + 2*nodeid*ORDER + k));
//		printf("\n\n\n");
	}
}

// n = nsrc, k = max leaf capacity
void build(const double* const x, const double*const y, const double* mass, const int n, const int k,
	double* xsorted, double* ysorted, double* mass_sorted, Node *nodes, double *expansions)
{
	Timer tm;
	double exTm, morTm, sorTm, reoTm, bldTm;
	int *index, *keys;
	double ext, xmin, ymin;

	posix_memalign((void **)&index, 32, sizeof(int) * n);
	posix_memalign((void **)&keys,  32, sizeof(int) * n);

	#pragma omp parallel for	
	for (int i=0; i<n; i++)
		keys[i] = i;

	tm.start();
	extent(n, x, y, xmin, ymin, ext);
	exTm = 1e-6 * tm.elapsedAndReset();
	
	printf("%f %f  %f\n", xmin, ymin, ext);

	morton(n, x, y, xmin, ymin, ext, index);
	morTm = 1e-6 * tm.elapsedAndReset();
	
	sort(n, index, keys);
	sorTm = 1e-6 * tm.elapsedAndReset();
	
	reorder(n, keys, x, y, mass, xsorted, ysorted, mass_sorted);
	reoTm = 1e-6 * tm.elapsed();

	if (n <= 100)
		for (int i=0; i<n; i++)
			printf("%2d : coordinates = [%6f %6f], ind = %x\n", i, xsorted[i], ysorted[i], index[i]); 

	auto builder = new TreeBuilder(nodes, (n + k - 1) / k * 6,
						xsorted, ysorted, mass_sorted, index, ext, xmin, ymin, k, expansions);

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

	free(index);
	free(keys);
}
