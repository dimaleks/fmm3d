#include <cstdlib>
#include <algorithm>
#include <cassert>
#include <cmath>
#include <omp.h>
#include <vector>
#include <cstring>


#include "tree.h"
#include "treehelper.h"
#include "p2e.h"
#include "e2e.h"
#include "e2l.h"
#include "l2l.h"

#define EXPSIZE  (ORDER * (ORDER+1))

namespace Tree
{

	Tree::Tree(int leafCapacity) :
		leafCapacity(leafCapacity), mortonIndex(nullptr), order(nullptr),
		xsorted(nullptr), ysorted(nullptr), zsorted(nullptr), qsorted(nullptr),
		nodes(nullptr), expansions(nullptr), neighbors(nullptr), locExps(nullptr), nsrc(0) {}

	Tree::~Tree()
	{
		free(mortonIndex);
		free(order);
		free(nodes);
		free(expansions);
		free(xsorted);
		free(ysorted);
		free(zsorted);
		free(qsorted);
	}

	void Tree::buildRecursive(const int nodeid)
	{
		auto node = nodes + nodeid;

		const int s = node->part_start;
		const int e = node->part_end;
		const int l = node->level;
		const int mId = node->morton_id;
		const bool leaf = e - s <= leafCapacity || l + 1 > LMAX;


		if (leaf)
		{
			node_setup(xsorted + s, ysorted + s, zsorted + s, qsorted + s, e - s,
					node->Q, node->xcom, node->ycom, node->zcom, node->r, node->w);
			ispc::p2e(xsorted + s, ysorted + s, zsorted + s, qsorted + s, e - s,
					node->xcom, node->ycom, node->zcom, expansions + nodeid*EXPSIZE);
		}
		else
		{
			int childbase;
#pragma omp atomic capture
			{
				childbase = curNNodes; curNNodes += nchildren;
			}
			assert(nodeid < childbase);
			assert(childbase + nchildren < maxNodes);

			node->child_id = childbase;

			for(int c = 0; c < nchildren; ++c)
			{
				const int shift = 3 * (LMAX - l - 1);

				const int key1 = mId | (c << shift);
				const int key2 = key1 + (1 << shift) - 1;

				const size_t indexmin = s + c == 0               ? s : std::lower_bound(mortonIndex+s, mortonIndex+e, key1) - mortonIndex;
				const size_t indexsup = s + c == (nchildren - 1) ? e : std::upper_bound(mortonIndex+s, mortonIndex+e, key2) - mortonIndex;

				const int chId = childbase + c;

				nodes[chId].setup(indexmin, indexsup, l + 1, key1);

#pragma omp task firstprivate(chId) if (indexsup - indexmin > 5e4 && c != nchildren-1)
				{
					buildRecursive(chId);
				}
			}

			double xrels  alignas(32) [nchildren];
			double yrels  alignas(32) [nchildren];
			double zrels  alignas(32) [nchildren];
			const double *ptrExps[nchildren];
			double *ptrLocExps[nchildren];
			double expsBuffer    alignas(32) [nchildren*EXPSIZE];
			double locExpsBuffer alignas(32) [nchildren*EXPSIZE];

#pragma omp taskwait

			node_setup(xsorted + s, ysorted + s, zsorted + s, qsorted + s, e - s,
					node->Q, node->xcom, node->ycom, node->zcom, node->r, node->w);

			for(int c = 0; c < nchildren; ++c)
			{
				const int chId = childbase + c;
				Node *child = nodes+chId;

				xrels[c] = child->xcom - node->xcom;
				yrels[c] = child->ycom - node->ycom;
				zrels[c] = child->zcom - node->zcom;

				ptrExps[c]    = expansions + chId*EXPSIZE;
				ptrLocExps[c] = locExps    + chId*EXPSIZE;
			}

			//			ispc::p2e(xsorted + s, ysorted + s, zsorted + s, qsorted + s, e - s,
			//					node->xcom, node->ycom, node->zcom, expansions + nodeid*EXPSIZE);

			transpose8xM(ptrExps, expsBuffer, EXPSIZE);
			e2e(xrels, yrels, zrels, expsBuffer, expansions + nodeid*EXPSIZE);

			for(int c = 0; c < nchildren; ++c)
			{
				const int chId = childbase + c;
				Node *child = nodes+chId;

				xrels[c] = child->xcom;
				yrels[c] = child->ycom;
				zrels[c] = child->zcom;
			}

			e2l(xrels, yrels, zrels, (const double*)expsBuffer, locExpsBuffer);
			transposeMx8(locExpsBuffer, ptrLocExps, EXPSIZE);
		}
	}

	void Tree::sumLocalExpsRecursive(const int nodeid)
	{
		auto parent = nodes + nodeid;

		double xrels  alignas(32) [nchildren];
		double yrels  alignas(32) [nchildren];
		double zrels  alignas(32) [nchildren];
		const double *ptrLocExps[nchildren];
		double locExpsBuffer alignas(32) [nchildren*EXPSIZE];

		if (parent->child_id == 0) return;

		// For each child 'dest', sum the local contribution
		// from all the other children 'c' and the parent
		for(int dest = 0; dest < nchildren; dest++)
		{
			auto dstnode = nodes + parent->child_id + dest;
			for(int c = 0; c < nchildren; ++c)
			{
				const int chId = parent->child_id + c;
				auto child = nodes+chId;

				xrels[c] = dstnode->xcom;
				yrels[c] = dstnode->ycom;
				zrels[c] = dstnode->zcom;

				ptrLocExps[c] = locExps + ( (dest == c) ? nodeid*EXPSIZE : chId*EXPSIZE );
			}

			transpose8xM(ptrLocExps, locExpsBuffer, EXPSIZE);
			l2l(xrels, yrels, zrels, locExpsBuffer, locExps + dest*EXPSIZE);
		}

		for(int c = 0; c < nchildren; ++c)
		{
			const int chId = parent->child_id + c;
#pragma omp task firstprivate(chId) if (parent->level <= 3 && c != nchildren-1)
			{
				sumLocalExpsRecursive(chId);
			}
		}
	}

	const char *int_to_binary(int x)
	{
		char *b = new char[33];
		char *p = b;

		for (unsigned int z = (1 << 31); z > (1 << 16); z >>= 1)
		{
			*(p++) = ((x & z) == z) ? '1' : '0';
		}
		b[32] = '\0';

		return b;
	}

	void Tree::findNearestNeighs()
	{
		// Sort the morton codes of all the nodes for fast search
		std::vector< std::pair<int, int> > keys2nodes(curNNodes);
		for (int i=0; i<curNNodes; i++)
			keys2nodes[i] = {nodes[i].morton_id, i};
		std::sort(keys2nodes.begin(), keys2nodes.end());

		for (int i=0; i<curNNodes; i++)
		{
			auto node = nodes+i;

			if (node->child_id == 0)  // is leaf?
			{
				int xcode, ycode, zcode;
				mortonDecode(node->morton_id, xcode, ycode, zcode);

				//printf("node code %s (%3d  %3d  %3d) -->  \n", int_to_binary(node->morton_id), xcode, ycode, zcode);

				// Check all the directions
				int count = 0;
				int sh = neighsProximity * (1 << (LMAX - node->level));
				for (int x = xcode-sh; x <= xcode+sh; x+=sh)
					for (int y = ycode-sh; y <= ycode+sh; y+=sh)
						for (int z = zcode-sh; z <= zcode+sh; z+=sh)
						{
							if (x < 0 || x >= (1 << LMAX) ||
								y < 0 || y >= (1 << LMAX) ||
								z < 0 || z >= (1 << LMAX) ||
								(x==0 && y==0 && z==0) )  continue;

							int neighCode = mortonEncode(x, y, z);

							// Find the node, which code is the biggest to be smaller or equal to nid
							auto ptr = std::lower_bound(keys2nodes.begin(), keys2nodes.end(), std::pair<int, int>(neighCode, 0),
									[] (auto& a, auto& b) -> bool { return a.first <= b.first; } ) - 1;
							neighbors[i*nNeighs + count] = ptr->second;

							//printf("\t %s (%2d) (%3d %3d %3d -- %s)\n", int_to_binary(nodes[ptr->second].morton_id), nodes[ptr->second].level, x, y, z, int_to_binary(neighCode));

							count++;
						}

				std::sort(neighbors+i*nNeighs, neighbors+i*nNeighs + count);
				auto ptr = std::unique(neighbors+i*nNeighs, neighbors+i*nNeighs + count);
				*ptr = -1;

				int cur = i*nNeighs;
//				while (neighbors[cur] != -1)
//				{
//					printf("%d ", neighbors[cur++]);
//				}
//				printf("\n\n\n\n");
			}
		}
	}

	void Tree::build( const int nsrc,
			const double* __restrict const xsrc,
			const double* __restrict const ysrc,
			const double* __restrict const zsrc,
			const double* __restrict const qsrc,
			Profiler& profiler)
	{
		if (nsrc > this->nsrc)
		{
			maxNodes = (nsrc + leafCapacity - 1) / leafCapacity * 20;

			free(mortonIndex);
			free(order);
			free(nodes);
			free(expansions);
			free(locExps);
			free(neighbors);
			free(xsorted);
			free(ysorted);
			free(zsorted);
			free(qsorted);

			posix_memalign((void **)&xsorted, 32, sizeof(double) * nsrc);
			posix_memalign((void **)&ysorted, 32, sizeof(double) * nsrc);
			posix_memalign((void **)&zsorted, 32, sizeof(double) * nsrc);
			posix_memalign((void **)&qsorted, 32, sizeof(double) * nsrc);

			posix_memalign((void **)&mortonIndex, 32, sizeof(int) * nsrc);
			posix_memalign((void **)&order,       32, sizeof(int) * nsrc);
			posix_memalign((void **)&neighbors,   32, sizeof(int) * maxNodes * nNeighs);

			posix_memalign((void **)&nodes,      32, sizeof(Node) * maxNodes);
			posix_memalign((void **)&expansions, 32, sizeof(double) * EXPSIZE * maxNodes);
			posix_memalign((void **)&locExps,    32, sizeof(double) * EXPSIZE * maxNodes);


			this->nsrc = nsrc;
		}

		double ext, xmin, ymin, zmin;

		for (int i=0; i<nsrc; i++)
			order[i] = i;

		profiler.profile("Tree : extent",   [&]() {
			extent(nsrc, xsrc, ysrc, zsrc, xmin, ymin, zmin, ext);
		});

		profiler.profile("Tree : morton",   [&]() {
			morton(nsrc, xsrc, ysrc, zsrc, xmin, ymin, zmin, ext, mortonIndex);
		});

		profiler.profile("Tree : sort",     [&]() {
			sort(nsrc, mortonIndex, order);
		});

		profiler.profile("Tree : reorder",  [&]() {
			reorder(nsrc, order, xsrc, ysrc, zsrc, qsrc, xsorted, ysorted, zsorted, qsorted);
		});

		profiler.profile("Tree : building", [&]() {
#pragma omp parallel
#pragma omp single nowait
			{
				curNNodes = 1;
				nodes[0].setup(0, nsrc, 0, 0);
				buildRecursive(0);
			}
		});

		profiler.profile("Tree : summing expansions", [&]() {
#pragma omp parallel
#pragma omp single nowait
			{
				std::fill(locExps, locExps + EXPSIZE, 0);
				sumLocalExpsRecursive(0);
			}
		});

		profiler.profile("Tree : neighbor search", [&]() {
			findNearestNeighs();
		});

		// TODO: subtract neighbors' expansions
	}
}
