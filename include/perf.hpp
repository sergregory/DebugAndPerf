#ifndef __PERF__HPP__
#define __PERF__HPP__
#endif

#include <ctime>
#include <iostream>

typedef clock_t perf_time_t;
#define TIC(name) perf_time_t start_##name = calcTicTime(); 
#define TOC(name) calcTocTime(start_##name);

perf_time_t calcTicTime();
void calcTocTime(perf_time_t ticTime);