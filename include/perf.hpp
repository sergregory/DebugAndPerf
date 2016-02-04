#ifndef __PERF__HPP__
#define __PERF__HPP__
#endif

#include <ctime>
#include <iostream>
#include <string.h>
#include "Statistics.hpp"

typedef clock_t perf_time_t;

//TIC...TOC block
#define TIC(name) perf_time_t start_##name = calcTicTime();
#define TOC(name) calcTocTime(start_##name);

//TIM...EMIT block
extern Statistics timeStatistics;

#define TIME(name) perf_time_t start_##name = calcTimeStatistics(#name); 
#define EMIT(name) calcEmitStatistics(start_##name);


//methods 
perf_time_t calcTicTime();
void calcTocTime(perf_time_t ticTime);


void finishStatistics();
perf_time_t calcTimeStatistics(std::string name);
void calcEmitStatistics(perf_time_t ticTime);
void printStatisticName();
void statisticOutput();
void getAllStatistics();

