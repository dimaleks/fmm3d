#include <cstdlib>
#include <algorithm>
#include <iterator>
#include <cassert>
#include <cmath>
#include <omp.h>
#include <vector>
#include <cstring>
#include <stack>

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
	nodes(nullptr), expansions(nullptr),
	myLocExps(nullptr), othersLocExps(nullptr), nsrc(0)
	{
		std::fill(zeros, zeros + EXPSIZE, 0);
	}
	
	Tree::~Tree()
	{
		free(mortonIndex);
		free(order);
		free(nodes);
		free(expansions);
		free(myLocExps);
		free(xsorted);
		free(ysorted);
		free(zsorted);
		free(qsorted);
		free(othersLocExps);
	}
	
	void Tree::buildRecursive(const int nodeid)
	{
		auto node = nodes + nodeid;
		
		const int s = node->part_start;
		const int e = node->part_end;
		const int l = node->level;
		const long long mId = node->morton_id;
		const bool leaf = node->level >= 2;//e - s <= leafCapacity || l + 1 > LMAX;
		
		
		if (leaf)
		{
			node_setup(xsorted + s, ysorted + s, zsorted + s, qsorted + s, e - s,
					   node->Q, node->xcom, node->ycom, node->zcom, node->r, node->w);
			ispc::p2e(xsorted + s, ysorted + s, zsorted + s, qsorted + s, e - s,
					  node->xcom, node->ycom, node->zcom, expansions + nodeid*EXPSIZE);
			
			// Corner case
			if (e-s == 0)
			{
				int xid, yid, zid;
				mortonDecode(node->morton_id, xid, yid, zid);
				node->xcom = xid*ext / (1 << LMAX) + xmin + ext / (1 << (l+1));
				node->ycom = yid*ext / (1 << LMAX) + ymin + ext / (1 << (l+1));
				node->zcom = zid*ext / (1 << LMAX) + zmin + ext / (1 << (l+1));
			}
		}
		else
		{
			int childbase;
			//#pragma omp atomic capture
			{
				childbase = curNNodes; curNNodes += nchildren;
			}
			assert(nodeid < childbase);
			assert(childbase + nchildren < maxNodes);
			
			node->child_id = childbase;
			
			for(int c = 0; c < nchildren; ++c)
			{
				const int shift = 3 * (LMAX - l - 1);
				
				const long long key1 = mId | ((long long)c << shift);
				const long long key2 = key1 + ((long long)1 << shift) - 1;
				
				const size_t indexmin = (c == 0)             ? s : std::lower_bound(mortonIndex+s, mortonIndex+e, key1) - mortonIndex;
				const size_t indexsup = (c == nchildren - 1) ? e : std::upper_bound(mortonIndex+s, mortonIndex+e, key2) - mortonIndex;
				
				const int chId = childbase + c;
				
				nodes[chId].setup(indexmin, indexsup, l + 1, key1);
				
				//#pragma omp task firstprivate(chId) if (indexsup - indexmin > 5e4 && c != nchildren-1)
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
			
			//#pragma omp taskwait
			
			node_setup(xsorted + s, ysorted + s, zsorted + s, qsorted + s, e - s,
					   node->Q, node->xcom, node->ycom, node->zcom, node->r, node->w);
			
			// TODO: remove this
			if (e-s == 0)
			{
				int xid, yid, zid;
				mortonDecode(node->morton_id, xid, yid, zid);
				node->xcom = xid*ext / (1 << LMAX) + xmin + ext / (1 << (l+1));
				node->ycom = yid*ext / (1 << LMAX) + ymin + ext / (1 << (l+1));
				node->zcom = zid*ext / (1 << LMAX) + zmin + ext / (1 << (l+1));
			}
			
			
			int nValid = 0;
			int validId = -1;
			for(int c = 0; c < nchildren; ++c)
			{
				const int chId = childbase + c;
				Node *child = nodes+chId;
				
				xrels[c] = child->xcom - node->xcom;
				yrels[c] = child->ycom - node->ycom;
				zrels[c] = child->zcom - node->zcom;
				
				ptrExps[c]    = expansions + chId*EXPSIZE;
				ptrLocExps[c] = myLocExps  + chId*EXPSIZE;
				if (child->part_end - child->part_start > 0)
				{
					nValid++;
					validId = chId;
				}
			}
			
			//			ispc::p2e(xsorted + s, ysorted + s, zsorted + s, qsorted + s, e - s,
			//					node->xcom, node->ycom, node->zcom, expansions + nodeid*EXPSIZE);
			
			transpose8xM(ptrExps, expsBuffer, EXPSIZE);
			ispc::e2e(xrels, yrels, zrels, expsBuffer, expansions + nodeid*EXPSIZE);
			
			for(int c = 0; c < nchildren; ++c)
			{
				const int chId = childbase + c;
				Node *child = nodes+chId;
				
				{
					xrels[c] = 1*ext / (1 << child->level);
					yrels[c] = 1*ext / (1 << child->level);
					zrels[c] = 1*ext / (1 << child->level);
				}
			}
			
			ispc::e2l(xrels, yrels, zrels, (const double*)expsBuffer, locExpsBuffer);
			transposeMx8(locExpsBuffer, ptrLocExps, EXPSIZE);
			
//			if (nValid >= 1)
//			{
//				for(int c = 0; c < nchildren; ++c)
//				{
//					printf("%f %f %f (%d  %f)\n", nodes[childbase+c].xcom, nodes[childbase+c].ycom, nodes[childbase+c].zcom, nodes[childbase+c].level, xrels[c]);
//				}
//				for (int i=0; i<EXPSIZE*8; i++)
//				{
//					printf("%e  ", expsBuffer[i]);
//					if (i%8 == 7) printf("\n");
//				}
//				printf("\n\n");
//				
//				for (int i=0; i<EXPSIZE*8; i++)
//				{
//					printf("%e  ", locExpsBuffer[i]);
//					if (i%8 == 7) printf("\n");
//				}
//				printf("\n\n");
//				
//				//exit(0);
//			}
		}
	}
	
	void Tree::computeLocalExpsRecursive(const int nodeid)
	{
		auto parent = nodes + nodeid;
		
		double xrels  alignas(32) [nchildren];
		double yrels  alignas(32) [nchildren];
		double zrels  alignas(32) [nchildren];
		double *ptrExps[nchildren];
		double expsBuffer alignas(32) [nchildren*EXPSIZE];
		
		if (parent->child_id == 0) return;
		
		// First scatter the parent's local expansion to all the children
		for(int c = 0; c < nchildren; ++c)
		{
			const int chId = parent->child_id + c;
			auto child = nodes+chId;
			
			xrels[c] = child->xcom - parent->xcom;
			yrels[c] = child->xcom - parent->ycom;
			zrels[c] = child->xcom - parent->zcom;
				
			ptrExps[c] = othersLocExps + chId*EXPSIZE;
			//printf("%f %f %f   %f\n", xrels[c], yrels[c], zrels[c], child->r);
		}
		
		ispc::l2l(xrels, yrels, zrels, othersLocExps + nodeid*EXPSIZE, expsBuffer);
		transposeMx8((const double*)expsBuffer, ptrExps, EXPSIZE);
		
		// Now for every child:
		// find the nodes that belong to parent's neigh list
		// but DO NOT belong to own neigh list
		// Add local expansions of those nodes
		auto& parentNeighs = neighbors[nodeid];
		
		for(int c = 0; c < nchildren; ++c)
		{
			const int chId = parent->child_id + c;
			auto child = nodes+chId;
			auto& myNeighs = neighbors[chId];
			
			std::set<int> diff;
			std::set_difference(parentNeighs.begin(), parentNeighs.end(),
								myNeighs.begin(), myNeighs.end(), std::inserter(diff, diff.end()));
			
			int count = 0;
			for (auto id : diff)
			{
				ptrExps[count] = expansions + id*EXPSIZE;
				xrels[count] = child->xcom - nodes[id].xcom;
				yrels[count] = child->ycom - nodes[id].ycom;
				zrels[count] = child->zcom - nodes[id].zcom;
				
				if (count % nchildren == 7)
				{
					transpose8xM((const double**)ptrExps, expsBuffer, EXPSIZE);
					ispc::e2l(xrels, yrels, zrels, (const double*)expsBuffer, othersLocExps + chId*EXPSIZE);
					count = -1; // Will be increased immediately later
				}
				count++;
			}
			
			// Remainder
			if (count != 0)
			{
				for (int i=count; i<nchildren; i++)
					ptrExps[i] = zeros;
				
				transpose8xM((const double**)ptrExps, expsBuffer, EXPSIZE);
				ispc::e2l(xrels, yrels, zrels, (const double*)expsBuffer, othersLocExps + chId*EXPSIZE);
			}
			
		}
		
		// Recurcively decend into children
		for(int c = 0; c < nchildren; ++c)
		{
			const int chId = parent->child_id + c;
			//#pragma omp task firstprivate(chId) if (parent->level <= 3 && c != nchildren-1)
			{
				computeLocalExpsRecursive(chId);
			}
		}
	}
	
	const char *int_to_binary(long long x)
	{
		char *b = new char[65];
		std::fill(b, b+64, '\0');
		char *p = b;
		
		for (unsigned long long z = (1ll << 63); z > (1ll << 43); z >>= 1)
		{
			*(p++) = ((x & z) == z) ? '1' : '0';
		}
		
		return b;
	}
	
	void Tree::findNearestNeighs()
	{
		// Sort the morton codes of all the nodes for fast search
		keys2nodes.resize(curNNodes);
		neighbors.resize (curNNodes);
		for (int i=0; i<curNNodes; i++)
			keys2nodes[i] = {nodes[i].morton_id, i};
		
		std::sort(keys2nodes.begin(), keys2nodes.end(), [&] (auto& a, auto& b) -> bool {
			if (a.first < b.first) return true;
			if (a.first == b.first) return nodes[a.second].level < nodes[b.second].level;
			return false;
		});
		
		for (int nodeid=0; nodeid<curNNodes; nodeid++)
		{
			auto node = nodes+nodeid;
			int xcode, ycode, zcode;
			mortonDecode(node->morton_id, xcode, ycode, zcode);
			
			printf("nodecode %s (%2d) (%3d  %3d  %3d)   %d -->  \n", int_to_binary(node->morton_id), node->level, xcode, ycode, zcode, nodeid);
			
			// Check all the directions
			int shift = (1 << (LMAX - node->level));
			int lim = neighsProximity * shift;
			std::stack<int> curset;
			for (int x = xcode-lim; x <= xcode+lim; x+=shift)
				for (int y = ycode-lim; y <= ycode+lim; y+=shift)
					for (int z = zcode-lim; z <= zcode+lim; z+=shift)
					{
						if (x < 0 || x >= (1 << LMAX) ||
							y < 0 || y >= (1 << LMAX) ||
							z < 0 || z >= (1 << LMAX) ||
							(x==xcode && y==ycode && z==zcode) )  continue;
						
						long long neighCode = mortonEncode(x, y, z);
						
						// Find the node, which code is the biggest to be smaller or equal to nid
						auto ptr = std::lower_bound(keys2nodes.begin(), keys2nodes.end(), std::pair<long long, int>(neighCode, 0),
													[] (auto& a, auto& b) -> bool { return a.first <= b.first; } ) - 1;
						
						while (node->level < nodes[ptr->second].level)
							ptr--;
						curset.push(ptr->second);
						printf("\t %s (%2d) (%3d %3d %3d -- %s)  #%d\n", int_to_binary(nodes[ptr->second].morton_id),
							   nodes[ptr->second].level, (x-xcode)/shift, (y-ycode)/shift, (z-zcode)/shift, int_to_binary(neighCode), ptr->second);
					}
			
			while (!curset.empty())
			{
				int nId = curset.top();
				curset.pop();
				if (nodes[nId].child_id != 0)
				{
					for (int c=0; c<nchildren; c++)
					{
						auto& candidate = nodes[nodes[nId].child_id + c];
						int xidCandidate, yidCandidate, zidCandidate;
						mortonDecode(candidate.morton_id, xidCandidate, yidCandidate, zidCandidate);
						
						if (std::abs(xcode - xidCandidate) <= lim &&
							std::abs(ycode - yidCandidate) <= lim &&
							std::abs(zcode - zidCandidate) <= lim)
						{
							curset.push(nodes[nId].child_id + c);
						}
					}
				}
				else
					neighbors[nodeid].insert(nId);
			}
			
			printf("\n");
			for (int cur : neighbors[nodeid])
			{
				printf("\t %s (%d)\n", int_to_binary(nodes[cur].morton_id), nodes[cur].level);
			}
			printf("\n\n\n\n");
		}
	}
	
	int Tree::findLeaf(const double xp, const double yp, const double zp)
	{
		const double factor = 1.0 / ext * (1 << LMAX);
		int xid = std::floor((xp - xmin) * factor);
		int yid = std::floor((yp - ymin) * factor);
		int zid = std::floor((zp - ymin) * factor);
		
		long long code = mortonEncode(xid, yid, zid);
		auto ptr = std::lower_bound(keys2nodes.begin(), keys2nodes.end(), std::pair<long long, int>(code, 0),
									[] (auto& a, auto& b) -> bool { return a.first <= b.first; } ) - 1;
		
//		printf("%f %f %f --> %s  --> %s (%d)   %f %f %f\n", xp, yp, zp, int_to_binary(code), int_to_binary(ptr->first), ptr->second,
//			   nodes[ptr->second].xcom, nodes[ptr->second].ycom, nodes[ptr->second].zcom);
		return ptr->second;
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
			maxNodes = (nsrc + leafCapacity - 1) / leafCapacity * 200;
			
			free(mortonIndex);
			free(order);
			free(nodes);
			free(expansions);
			free(myLocExps);
			free(othersLocExps);
			free(xsorted);
			free(ysorted);
			free(zsorted);
			free(qsorted);
			
			posix_memalign((void **)&xsorted, 32, sizeof(double) * nsrc);
			posix_memalign((void **)&ysorted, 32, sizeof(double) * nsrc);
			posix_memalign((void **)&zsorted, 32, sizeof(double) * nsrc);
			posix_memalign((void **)&qsorted, 32, sizeof(double) * nsrc);
			
			posix_memalign((void **)&mortonIndex, 32, sizeof(long long) * nsrc);
			posix_memalign((void **)&order,       32, sizeof(int) * nsrc);
			
			posix_memalign((void **)&nodes,         32, sizeof(Node) * maxNodes);
			posix_memalign((void **)&expansions,    32, sizeof(double) * EXPSIZE * maxNodes);
			posix_memalign((void **)&myLocExps,     32, sizeof(double) * EXPSIZE * maxNodes);
			posix_memalign((void **)&othersLocExps, 32, sizeof(double) * EXPSIZE * maxNodes);
			
			this->nsrc = nsrc;
		}
		
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
			//#pragma omp parallel
			//#pragma omp single nowait
			{
				curNNodes = 1;
				std::fill(expansions, expansions + maxNodes*EXPSIZE, 0);
				nodes[0].setup(0, nsrc, 0, 0);
				buildRecursive(0);
				printf("NODES: %d\n", curNNodes);
			}
		});
		
		profiler.profile("Tree : neighbor search", [&]() {
			findNearestNeighs();
		});
		
		profiler.profile("Tree : local exps", [&]() {
			//#pragma omp parallel
			//#pragma omp single nowait
			{
				computeLocalExpsRecursive(0);
			}
		});
	}
}
