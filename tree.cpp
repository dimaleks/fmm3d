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
	
	Tree::Tree(const int leafCapacity, const int neighsProximity) :
	leafCapacity(leafCapacity),	neighsProximity(neighsProximity), nNeighs( (2*neighsProximity + 1) * (2*neighsProximity + 1) * (2*neighsProximity + 1) - 1)
	{
		std::fill(zeros, zeros + EXPSIZE, 0);
	}
	
	void Tree::buildRecursive(const int nodeid)
	{
		auto node = nodes.ptr() + nodeid;
		
		const int s = node->part_start;
		const int e = node->part_end;
		const int l = node->level;
		const int64_t mId = node->morton_id;
		const bool leaf = e - s <= leafCapacity || l + 1 > LMAX;
		
		
		if (leaf)
		{
			node_setup(xsorted.ptr() + s, ysorted.ptr() + s, zsorted.ptr() + s, qsorted.ptr() + s, e - s,
					   node->Q, node->xcom, node->ycom, node->zcom, node->r, node->w);
			ispc::p2e(xsorted.ptr() + s, ysorted.ptr() + s, zsorted.ptr() + s, qsorted.ptr() + s, e - s,
					  node->xcom, node->ycom, node->zcom, expansions.ptr() + nodeid*EXPSIZE);
			
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
				
				const int64_t key1 = mId | ((int64_t)c << shift);
				const int64_t key2 = key1 + ((int64_t)1 << shift) - 1;
				
				const size_t indexmin = (c == 0)             ? s : std::lower_bound(mortonIndex.ptr()+s, mortonIndex.ptr()+e, key1) - mortonIndex.ptr();
				const size_t indexsup = (c == nchildren - 1) ? e : std::upper_bound(mortonIndex.ptr()+s, mortonIndex.ptr()+e, key2) - mortonIndex.ptr();
				
				const int chId = childbase + c;
				
				nodes[chId].setup(indexmin, indexsup, l + 1, key1);
				
#pragma omp task firstprivate(chId) if (l < 3 && c != nchildren-1)
				{
					buildRecursive(chId);
				}
			}
			
#pragma omp taskwait
			
			double xrels  alignas(32) [nchildren];
			double yrels  alignas(32) [nchildren];
			double zrels  alignas(32) [nchildren];
			const double *ptrExps[nchildren];
			double expsBuffer  alignas(32) [nchildren*EXPSIZE];
			
			node_setup(xsorted.ptr() + s, ysorted.ptr() + s, zsorted.ptr() + s, qsorted.ptr() + s, e - s,
					   node->Q, node->xcom, node->ycom, node->zcom, node->r, node->w);
			
			// TODO: remove this?
			if (e-s == 0)
			{
				int xid, yid, zid;
				mortonDecode(node->morton_id, xid, yid, zid);
				node->xcom = xid*ext / (1 << LMAX) + xmin + ext / (1 << (l+1));
				node->ycom = yid*ext / (1 << LMAX) + ymin + ext / (1 << (l+1));
				node->zcom = zid*ext / (1 << LMAX) + zmin + ext / (1 << (l+1));
			}
			
			
			for(int c = 0; c < nchildren; ++c)
			{
				const int chId = childbase + c;
				Node *child = nodes.ptr()+chId;
				
				xrels[c] = child->xcom - node->xcom;
				yrels[c] = child->ycom - node->ycom;
				zrels[c] = child->zcom - node->zcom;
				
				ptrExps[c] = expansions.ptr() + chId*EXPSIZE;
			}
			
			transpose8xM(ptrExps, expsBuffer, EXPSIZE);
			ispc::e2e(xrels, yrels, zrels, expsBuffer, expansions.ptr() + nodeid*EXPSIZE);
		}
	}
	
	void Tree::computeLocalExpsRecursive(const int nodeid)
	{
		auto parent = nodes.ptr() + nodeid;
		
		double xrels  alignas(32) [nchildren];
		double yrels  alignas(32) [nchildren];
		double zrels  alignas(32) [nchildren];
		double *ptrExps[nchildren];
		double expsBuffer alignas(32) [nchildren*EXPSIZE] = {0};
		
		if (parent->child_id == 0) return;
		
		// First scatter the parent's local expansion to all the children
		for(int c = 0; c < nchildren; ++c)
		{
			const int chId = parent->child_id + c;
			auto child = nodes.ptr() + chId;
			
			xrels[c] = -child->xcom + parent->xcom;
			yrels[c] = -child->ycom + parent->ycom;
			zrels[c] = -child->zcom + parent->zcom;
			
			ptrExps[c] = locExps.ptr() + chId*EXPSIZE;
		}
		
		ispc::l2l(xrels, yrels, zrels, locExps.ptr() + nodeid*EXPSIZE, expsBuffer);
		transposeMx8((const double*)expsBuffer, ptrExps, EXPSIZE);
		
		// Now for every child:
		// find the nodes that belong to parent's neigh list
		// but DO NOT belong to own neigh list
		// Add local expansions of those nodes
		std::vector<int> parentNeighs;
		parentNeighs.reserve(nNeighs*8);
		
		for (int nId : neighbors[nodeid])
		{
			if (nodes[nId].level >= parent->level && nodes[nId].child_id != 0)
				for(int c = 0; c < nchildren; ++c)
					parentNeighs.push_back(nodes[nId].child_id + c);
			else
				parentNeighs.push_back(nId);
		}
		std::sort(parentNeighs.begin(), parentNeighs.end());
		
		std::vector<int> diff;
		diff.reserve(nNeighs*8);
		for(int c = 0; c < nchildren; ++c)
		{
			const int chId = parent->child_id + c;
			auto child = nodes.ptr() + chId;
			auto& myNeighs = neighbors[chId];
			
			diff.clear();
			std::set_difference(parentNeighs.begin(), parentNeighs.end(),
								myNeighs.begin(), myNeighs.end(), std::inserter(diff, diff.end()));
			
			int count = 0;
			for (auto id : diff)
			{
				ptrExps[count] = expansions.ptr() + id*EXPSIZE;
				xrels[count] = -child->xcom + nodes[id].xcom;
				yrels[count] = -child->ycom + nodes[id].ycom;
				zrels[count] = -child->zcom + nodes[id].zcom;
				
				if (count % nchildren == 7)
				{
					// Change division to mult in the kernel
					transpose8xM((const double**)ptrExps, expsBuffer, EXPSIZE);
					ispc::e2l(xrels, yrels, zrels, (const double*)expsBuffer, locExps.ptr() + chId*EXPSIZE);
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
				ispc::e2l(xrels, yrels, zrels, (const double*)expsBuffer, locExps.ptr() + chId*EXPSIZE);
			}
			
			//			if (true)
			//			{
			//				printf("Node %d:  (%f %f %f),  %d parts\n", chId, nodes[chId].xcom, nodes[chId].ycom, nodes[chId].zcom, nodes[chId].part_end - nodes[chId].part_start);
			//				for (int i=0; i<EXPSIZE; i++)
			//				{
			//					printf("%e  ", locExps[chId*EXPSIZE + i]);
			//				}
			//				printf("\n\n");
			//			}
		}
		
		// Recurcively decend into children
		for(int c = 0; c < nchildren; ++c)
		{
			const int chId = parent->child_id + c;
#pragma omp task firstprivate(chId) if (parent->level < 3 && c != nchildren-1)
			{
				computeLocalExpsRecursive(chId);
			}
		}
	}
	
	void Tree::findNearestNeighs()
	{
		// Sort the morton codes of all the nodes for fast search
		keys2nodes.resize(curNNodes);
		neighbors.resize (curNNodes);
		for (int i=0; i<curNNodes; i++)
			keys2nodes[i] = {nodes[i].morton_id, i};
		
		std::sort(keys2nodes.begin(), keys2nodes.end(),
				  [&] (auto& a, auto& b) -> bool
				  {
					  if (a.first < b.first) return true;
					  if (a.first == b.first) return nodes[a.second].level < nodes[b.second].level;
					  return false;
				  });
		
#pragma omp parallel for
		for (int nodeid=0; nodeid<curNNodes; nodeid++)
		{
			neighbors[nodeid].clear();
			auto node = nodes.ptr() + nodeid;
			int xcode, ycode, zcode;
			mortonDecode(node->morton_id, xcode, ycode, zcode);
			
			//printf("nodecode %s (%2d) (%3d  %3d  %3d)   %d -->  \n", int_to_binary(node->morton_id), node->level, xcode, ycode, zcode, nodeid);
			
			// Check all the directions
			int shift = (1 << (LMAX - node->level));
			int lim = neighsProximity * shift;
			std::stack<int> curset;
			
			// Insert the node itself
			curset.push(nodeid);
			
			for (int x = xcode-lim; x <= xcode+lim; x+=shift)
				for (int y = ycode-lim; y <= ycode+lim; y+=shift)
					for (int z = zcode-lim; z <= zcode+lim; z+=shift)
					{
						if (x < 0 || x >= (1 << LMAX) ||
							y < 0 || y >= (1 << LMAX) ||
							z < 0 || z >= (1 << LMAX) ||
							(x==xcode && y==ycode && z==zcode) )  continue;
						
						int64_t neighCode = mortonEncode(x, y, z);
						
						// Find the node, which code is the biggest to be smaller or equal to nid
						auto ptr = std::lower_bound(keys2nodes.begin(), keys2nodes.end(), std::pair<int64_t, int>(neighCode, 0),
													[] (auto& a, auto& b) -> bool { return a.first <= b.first; } ) - 1;
						
						while (node->level < nodes[ptr->second].level)
							ptr--;
						curset.push(ptr->second);
						//						printf("\t %s (%2d) (%3d %3d %3d -- %s)  #%d\n", int_to_binary(nodes[ptr->second].morton_id),
						//							   nodes[ptr->second].level, (x-xcode)/shift, (y-ycode)/shift, (z-zcode)/shift, int_to_binary(neighCode), ptr->second);
					}
			
			// TODO: check if this code is not redundant
			while (!curset.empty())
			{
				int nId = curset.top();
				curset.pop();
				if (nodes[nId].child_id != 0 && nodes[nId].level > node->level)
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
			
			//			printf("\n");
			//			for (int cur : neighbors[nodeid])
			//			{
			//				printf("\t %s (%d)\n", int_to_binary(nodes[cur].morton_id), nodes[cur].level);
			//			}
			//			printf("\n\n\n\n");
		}
	}
	
	int Tree::findLeaf(const double xp, const double yp, const double zp)
	{
		const double factor = 1.0 / ext * (1 << LMAX);
		int xid = std::floor((xp - xmin) * factor);
		int yid = std::floor((yp - ymin) * factor);
		int zid = std::floor((zp - ymin) * factor);
		
		int64_t code = mortonEncode(xid, yid, zid);
		auto ptr = std::lower_bound(keys2nodes.begin(), keys2nodes.end(), std::pair<int64_t, int>(code, 0),
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
		
		maxNodes = (nsrc + leafCapacity - 1) / leafCapacity * 2000;
		
		mortonIndex.resize(nsrc);
		order.resize(nsrc);
		xsorted.resize(nsrc);
		ysorted.resize(nsrc);
		zsorted.resize(nsrc);
		qsorted.resize(nsrc);
		
		nodes.resize(maxNodes);
		expansions.resize(EXPSIZE * maxNodes);
		locExps.resize(EXPSIZE * maxNodes);
		
		for (int i=0; i<nsrc; i++)
			order[i] = i;
		
		profiler.profile("Tree", [&]() {
			
			profiler.profile("extent",   [&]() {
				extent(nsrc, xsrc, ysrc, zsrc, xmin, ymin, zmin, ext);
			});
			
			profiler.profile("sorton",   [&]() {
				morton(nsrc, xsrc, ysrc, zsrc, xmin, ymin, zmin, ext, mortonIndex.ptr());
			});
			
			profiler.profile("sort",     [&]() {
				sort(nsrc, mortonIndex.ptr(), order.ptr());
			});
			
			profiler.profile("reorder",  [&]() {
				reorder(nsrc, order.ptr(), xsrc, ysrc, zsrc, qsrc,
						xsorted.ptr(), ysorted.ptr(), zsorted.ptr(), qsorted.ptr());
			});
		
			profiler.profile("building", [&]() {
	#pragma omp parallel
	#pragma omp single nowait
				{
					curNNodes = 1;
					nodes[0].setup(0, nsrc, 0, 0);
					buildRecursive(0);
				}
			});
		});
	}
	
	void Tree::computeLocalExps(Profiler& profiler)
	{
		profiler.profile("Local Exps", [&]() {
			
			profiler.profile("Neighbors", [&]() {
				findNearestNeighs();
			});
			
			profiler.profile("Expansions", [&]() {
#pragma omp parallel
#pragma omp single nowait
				{
					computeLocalExpsRecursive(0);
				}
			});
		});
	}
	
}
