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

namespace Tree
{
	struct Node
	{
		int part_start, part_end;
		int child_id;
		double Q, xcom, ycom, zcom, r, w;
		int level, morton_id;

		//int parent;

		void setup(int part_start, int part_end, int level, int morton_id)
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
		int maxNodes;
		int leafCapacity;

		int *mortonIndex, *order;

		int curNNodes, nsrc;

		void buildRecursive(int nodeid);
		void sumLocalExpsRecursive(int nodeid);
		void findNearestNeighs();

	public:

		Node   *nodes;
		double *xsorted, *ysorted, *zsorted, *qsorted;
		double *expansions;
		double *locExps;
		int    *neighbors;


		Tree(const int leafCapacity);
		~Tree();

		void build(	const int nsrc,
					const double* __restrict const xsrc,
					const double* __restrict const ysrc,
					const double* __restrict const zsrc,
					const double* __restrict const qsrc,
					Profiler& profiler);
	};

}


