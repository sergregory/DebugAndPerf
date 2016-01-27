#ifndef __PERF__HPP__
#define __PERF__HPP__
#endif

#include <ctime>
#include <iostream>
#include "Statistics.hpp"

typedef clock_t perf_time_t;

//TIC...TOC block
#define TIC(name) perf_time_t start_##name = calcTicTime(); 
#define TOC(name) calcTocTime(start_##name);

//TIM...EMIT block
//Statistics timeStatistics;

#define TIME(name) perf_time_t start_##name = calcTimeStatistics(); 
#define EMIT(name) calcEmitStatistics(start_##name);

//methods 
perf_time_t calcTicTime();
void calcTocTime(perf_time_t ticTime);

perf_time_t calcTimeStatistics();
void calcEmitStatistics(perf_time_t ticTime);

