/*
 *  tree.h
 *  ex5 solution
 *
 *  Created by Dmitry Alexeev on May 30, 2016
 *  Copyright 2016 ETH Zurich. All rights reserved.
 *
 */


#pragma once

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
			double* __restrict expansions);


