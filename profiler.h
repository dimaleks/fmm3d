/*
 *  Profiler.h
 *  hpchw
 *
 *  Created by Dmitry Alexeev on 30.10.13.
 *  Copyright 2013 ETH Zurich. All rights reserved.
 *
 */

#pragma once

#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <unordered_map>
#include <algorithm>
#include <vector>

#include "timer.h"

struct Timings
{
	bool started;
	int iterations;
	int64_t total;
	Timer timer;
	
	Timings() : started(false), iterations(0), total(0), timer() {};
};

class Profiler
{
public:
	enum Unit {s, ms, us};
	
private:
	std::unordered_map<std::string, Timings>  timings;
	std::unordered_map<std::string, Profiler*> childProfilers;
	std::string ongoing;
	int numStarted;
	
	std::string __printStatAndReset(Unit unit, std::string prefix)
	{
		double total = 0;
		int longest = 0;
		std::ostringstream out;
		
		for (auto &tm : timings)
		{
			if (tm.second.started)
			{
				tm.second.started = false;
				tm.second.total += tm.second.timer.elapsed();
			}
			
			total += (double)tm.second.total;
			if (longest < tm.first.length())
				longest = tm.first.length();
		}
		
		double factor = 1.0;
		std::string suffix;
		switch (unit)
		{
			case Unit::s :
				factor = 1.0e-9;
				suffix = "s";
				break;
				
			case Unit::ms :
				factor = 1.0e-6;
				suffix = "ms";
				break;
				
			case Unit::us :
				factor = 1.0e-3;
				suffix = "us";
				break;
		}
		longest = std::max(longest, 6);
		
		out << prefix << "Total time: " << std::fixed << std::setprecision(1) << total*factor << " " << suffix << std::endl;
		out << prefix << std::left << "[" << std::setw(longest) << "Kernel" << "]    " << std::setw(20)
		<< "Time, "+suffix << std::setw(20) << "Executions" << std::setw(20) << "Percentage" << std::endl;
		
		std::vector<std::pair<std::string, Timings>> v(timings.begin(), timings.end());
		std::sort(v.begin(), v.end(), [] (auto& a, auto& b) { return a.second.total > b.second.total; });
		
		for (auto &tm : v)
		{
			out << prefix << "[" << std::setw(longest) << tm.first << "]    "
			<< std::fixed << std::setprecision(3) << std::setw(20) << tm.second.total * factor / tm.second.iterations
			<<  "x" << std::setw(19) << tm.second.iterations
			<< std::fixed << std::setprecision(1) << std::setw(20) << tm.second.total / total * 100.0 << std::endl;
		}
		
		timings.clear();
		
		if (childProfilers.size() > 0)
		{
			out << std::endl << "Details:" << std::endl;

			for (auto& p : childProfilers)
			{
				out << "  " << p.first << ":" << std::endl;
				out << p.second->__printStatAndReset(unit, prefix+"\t") << std::endl;
			}
		}
		
		return out.str();
	}
	
public:
	inline Profiler() : ongoing(""), numStarted(0) {};
	
	inline void start(std::string name)
	{
		if (ongoing.length() == 0)
		{
			ongoing = name;
			auto& tm = timings[name];
			tm.started = true;
			tm.timer.start();
		}
		else
		{
			bool empty = childProfilers.find(ongoing) == childProfilers.end();
			auto& chProf = childProfilers[ongoing];
			if (empty) chProf = new Profiler();
			chProf->start(name);
			numStarted++;
		}
	}
	
	inline void stop()
	{
		if (numStarted > 0)
		{
			auto chProf = childProfilers[ongoing];
			chProf->stop();
			numStarted--;
		}
		else
		{
			if (timings.find(ongoing) != timings.end())
			{
				Timings &tm = timings[ongoing];
				if (tm.started)
				{
					tm.started = false;
					tm.total += tm.timer.elapsedAndReset();
					tm.iterations++;
				}
			}
			ongoing = "";
		}
	}
	
	template<typename Func>
	inline void profile(std::string name, Func func)
	{
		start(name);
		func();
		stop();
	}
	
	inline double elapsed(std::string name, Unit unit = Unit::ms)
	{
		double factor = 1.0;
		switch (unit)
		{
			case Unit::s :
				factor = 1.0e-9;
				break;
				
			case Unit::ms :
				factor = 1.0e-6;
				break;
				
			case Unit::us :
				factor = 1.0e-3;
				break;
		}
		
		if (timings.find(name) != timings.end())
		{
			Timings &tm = timings[name];
			return (factor * (double)tm.total) / tm.iterations;
		}
		return 0;
	}
	
	std::string printStatAndReset(Unit unit = Unit::ms)
	{
		return __printStatAndReset(unit, "");
	}
};
