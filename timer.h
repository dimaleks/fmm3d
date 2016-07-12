/*
 *  timer.h
 *  smarties
 *
 *  Created by Dmitry Alexeev on 15.2.16.
 *  Copyright 2016 ETH Zurich. All rights reserved.
 *
 */

#pragma once

#include <chrono>

class Timer
{
private:
    std::chrono::time_point<std::chrono::high_resolution_clock> _start, _end;
    
    const std::chrono::time_point<std::chrono::high_resolution_clock> none =
          std::chrono::time_point<std::chrono::high_resolution_clock>::min();
    
public:
    
    inline Timer()
    {
        _start = none;
        _end   = none;
    }
    
    inline void start()
    {
        _start = std::chrono::high_resolution_clock::now();
        _end   = none;
    }
    
    inline void stop()
    {
        _end = std::chrono::high_resolution_clock::now();
    }
    
    inline long long elapsed()
    {
        if (_end == none) _end = std::chrono::high_resolution_clock::now();
        
        return std::chrono::duration <long int, std::nano>(_end - _start).count();
    }
    
    inline long long elapsedAndReset()
    {
        if (_end == none) _end = std::chrono::high_resolution_clock::now();
        
        long long t = std::chrono::duration <long long, std::nano>(_end - _start).count();
        
        _start = _end;
        _end = none;
        return t;
    }
};
