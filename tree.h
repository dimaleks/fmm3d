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
	template<typename T, int alignTo = 64>
	class alignedVector
	{
		static constexpr double safetyFactor = 1.2;
		static constexpr int    safetyExtra  = 10;
		
		T* data;
		int _size;
		int capacity;
		
	public:
		inline alignedVector(int n=0) :
			_size(n), capacity(safetyFactor * n + safetyExtra)
		{
			posix_memalign((void **)&data, alignTo, sizeof(T) * capacity);
		}
		
		inline ~alignedVector()
		{
			free(data);
		}
		
		inline void resize(int n)
		{
			if (n <= capacity)
				_size = n;
			else
			{
				capacity = safetyFactor * n + safetyExtra;
				_size = n;
				free(data);
				posix_memalign((void **)&data, alignTo, sizeof(T) * capacity);
			}
		}
		
		inline T& operator[] (int i) {return data[i];}
		inline T* ptr()   {return data;}
		inline int size() {return _size;}
	};
	
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
		static constexpr int nchildren = 8;
		static constexpr int neighsProximity = 1;
		static constexpr int nNeighs = (2*neighsProximity + 1) * (2*neighsProximity + 1) * (2*neighsProximity + 1) - 1;

		double zeros alignas(32) [EXPSIZE];

		int maxNodes;
		int leafCapacity;

		double ext, xmin, ymin, zmin;
		alignedVector<long long> mortonIndex;
		alignedVector<int> order;

		std::vector<std::set<int>> neighbors;
		std::vector< std::pair<long long, int> > keys2nodes;

		int curNNodes;

		void buildRecursive(int nodeid);
		void computeLocalExpsRecursive(int nodeid);
		void findNearestNeighs();
		
	public:

		alignedVector<Node>   nodes;
		alignedVector<double> xsorted, ysorted, zsorted, qsorted;
		alignedVector<double> expansions;
		alignedVector<double> locExps;


		Tree(const int leafCapacity);

		int findLeaf(const double xp, const double yp, const double zp);

		inline auto& getNeigh(int node)
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


