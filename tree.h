/*
 *  tree.h
 *  ex5 solution
 *
 *  Created by Dmitry Alexeev on May 30, 2016
 *  Copyright 2016 ETH Zurich. All rights reserved.
 *
 */

#pragma once

#include "profiler.h"
#include <vector>
#include <set>

#define EXPSIZE  (ORDER * (ORDER+1))

namespace Tree
{
	struct Node
	{
		int part_start, part_end;
		int child_id;
		double Q, xcom, ycom, zcom, r, w;
		int level;
		long long morton_id;

		//int parent;

		void setup(int part_start, int part_end, int level, long long morton_id)
		{
			this->part_start = part_start;
			this->part_end = part_end;
			this->child_id = 0;
			this->level = level;
			this->morton_id = morton_id;
		}
	};


	class Tree
	{
		static const int nchildren = 8;
		static const int neighsProximity = 1;
		static const int nNeighs = (2*neighsProximity + 1) * (2*neighsProximity + 1) * (2*neighsProximity + 1) - 1;

		double zeros alignas(32) [EXPSIZE];

		int maxNodes;
		int leafCapacity;

		double ext, xmin, ymin, zmin;
		long long *mortonIndex;
		int *order;
		std::vector<std::set<int>> neighbors;

		std::vector< std::pair<long long, int> > keys2nodes;

		int curNNodes, nsrc;

		void buildRecursive(int nodeid);
		void computeLocalExpsRecursive(int nodeid);
		void findNearestNeighs();
		
	public:

		Node   *nodes;
		double *xsorted, *ysorted, *zsorted, *qsorted;
		double *expansions;
		double *myLocExps;
		double *othersLocExps;


		Tree(const int leafCapacity);
		~Tree();

		int findLeaf(const double xp, const double yp, const double zp);

		inline auto getNeigh(int node)
		{
			return neighbors[node];
		}

		void build(	const int nsrc,
					const double* __restrict const xsrc,
					const double* __restrict const ysrc,
					const double* __restrict const zsrc,
					const double* __restrict const qsrc,
					Profiler& profiler);
	};

}


