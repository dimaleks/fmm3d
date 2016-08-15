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
#include <tuple>
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

namespace detail
{
	template <typename _Fn, typename _Tuple, std::size_t... _Idx>
	constexpr decltype(auto)
	__apply_impl(_Fn&& f, _Tuple&& t, std::index_sequence<_Idx...>)
	{ return std::forward<_Fn>(f)(std::get<_Idx>(std::forward<_Tuple>(t))...); }
	
	template <typename _Fn, typename _Tuple>
	constexpr decltype(auto)
	applyAllButOne(_Fn&& f, _Tuple&& t)
	{
		using _Indices =
		std::make_index_sequence<std::tuple_size<std::decay_t<_Tuple>>::value - 1>;
		return __apply_impl(std::forward<_Fn>(f), std::forward<_Tuple>(t),
							_Indices{});
	}
	
	template <typename _Fn, typename _Tuple>
	constexpr decltype(auto)
	apply(_Fn&& f, _Tuple&& t)
	{
		using _Indices =
		std::make_index_sequence<std::tuple_size<std::decay_t<_Tuple>>::value>;
		return __apply_impl(std::forward<_Fn>(f), std::forward<_Tuple>(t),
							_Indices{});
	}
}

class Profiler
{
    std::unordered_map<std::string, Timings>  timings;
	std::unordered_map<std::string, Profiler> childProfilers;
	std::string ongoing;
	
	std::string __printStatAndReset(Unit unit = Unit::ms, std::string prefix)
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
		
		std::vector<std::pair<std::string, Timings>> v(timings.begin(), timings.end());
		std::sort(v.begin(), v.end(), [] (auto& a, auto& b) { return a.second.total > b.second.total; });
		
		for (auto &tm : v)
		{
			out << "[" << std::setw(longest) << tm.first << "]    "
			<< std::fixed << std::setprecision(3) << std::setw(20) << tm.second.total * factor / tm.second.iterations
			<<  "x" << std::setw(19) << tm.second.iterations
			<< std::fixed << std::setprecision(1) << std::setw(20) << tm.second.total / total * 100.0 << std::endl;
		}
		
		timings.clear();
		
		if (childProfilers.size() > 0)
		{
			for (auto& p : childProfilers)
			{
				out << std::endl << "Details for " << p.first << ":" << std::endl;
				out << p.second.printStatAndReset(unit);
			}
		}
		
		return out.str();
	}
	
public:
    enum Unit {s, ms, us};

    inline Profiler() : ongoing("") {};
	
	inline void start(std::string name)
	{
		ongoing = name;
		auto& tm = timings[name];
		tm.started = true;
		tm.timer.start();
	}

	template<typename... Args>
	inline void start(std::string name, Args... otherNames)
    {
		start(name);
		auto& chProf = childProfilers[name];
		chProf.start(otherNames...);
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
		ongoing = "";
		
		if (childProfilers.find(name) != childProfilers.end())
		{
			auto& chProf = childProfilers[name];
			chProf.stop();
		}
    }
	
    inline void stop()
    {
		if (ongoing.length() > 0) stop(ongoing);
	}
	

    template<typename... Args>
    inline void profile(Args... args)
    {
		auto argTp = std::make_tuple(args...);
		detail::applyAllButOne([&] (auto... params) { this->start(params...); }, argTp);
		auto func = std::get<std::tuple_size<std::decay_t<decltype(argTp)>>::value - 1>(argTp);
		(func)();
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
		
		std::vector<std::pair<std::string, Timings>> v(timings.begin(), timings.end());
		std::sort(v.begin(), v.end(), [] (auto& a, auto& b) { return a.second.total > b.second.total; });
		
		for (auto &tm : v)
    	{
    		out << "[" << std::setw(longest) << tm.first << "]    "
    				<< std::fixed << std::setprecision(3) << std::setw(20) << tm.second.total * factor / tm.second.iterations
    				<<  "x" << std::setw(19) << tm.second.iterations
    				<< std::fixed << std::setprecision(1) << std::setw(20) << tm.second.total / total * 100.0 << std::endl;
    	}

    	timings.clear();
		
		if (childProfilers.size() > 0)
		{
			for (auto& p : childProfilers)
			{
				out << std::endl << "Details for " << p.first << ":" << std::endl;
				out << p.second.printStatAndReset(unit);
			}
		}

    	return out.str();
    }
};
