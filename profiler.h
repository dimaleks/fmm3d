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
#include <iomanip>
#include <unordered_map>

#include "timer.h"

struct Timings
{
    bool started;
    int iterations;
    long long total;
    Timer timer;
    
    Timings() : started(false), iterations(0), total(0) {};
};

class Profiler
{    
    std::unordered_map<std::string, Timings> timings;
    Timings *ongoing;
    
public:
    enum Unit {s, ms, us};

    inline Profiler() : ongoing(nullptr) {};

    inline void start(std::string name)
    {
    	ongoing = &timings[name];
    	ongoing->started = true;
    	ongoing->timer.start();
    }

    inline void stop(std::string name)
    {
    	if (timings.find(name) != timings.end())
    	{
    		Timings &tm = timings[name];
    		if (tm.started)
    		{
    			tm.started = false;
    			tm.total += tm.timer.elapsedAndReset();
    			tm.iterations++;
    		}
    	}
    }
    
    inline void stop()
    {
    	if (ongoing != nullptr && ongoing->started)
    	{
    		ongoing->started = false;
    		ongoing->total += ongoing->timer.elapsedAndReset();
    		ongoing->iterations++;
    	}
    }

    template<typename Lambda>
    inline void profile(std::string name, Lambda func)
    {
    	start(name);
    	func();
    	stop();
    }

    inline double elapsed(std::string name, Unit unit = Unit::ms)
    {
    	double factor = 1.0;;
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

    	out << "Total time: " << std::fixed << std::setprecision(1) << total*factor << " " << suffix << std::endl;
    	out << std::left << "[" << std::setw(longest) << "Kernel" << "]    " << std::setw(20)
    			<< "Time, "+suffix << std::setw(20) << "Executions" << std::setw(20) << "Percentage" << std::endl;
    	for (auto &tm : timings)
    	{
    		out << "[" << std::setw(longest) << tm.first << "]    "
    				<< std::fixed << std::setprecision(3) << std::setw(20) << tm.second.total * factor / tm.second.iterations
    				<<  "x" << std::setw(19) << tm.second.iterations
    				<< std::fixed << std::setprecision(1) << std::setw(20) << tm.second.total / total * 100.0 << std::endl;
    	}

    	timings.clear();

    	return out.str();
    }
};
