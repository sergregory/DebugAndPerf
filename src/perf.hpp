#include <ctime>
#include <iostream>

#define TIC(name) clock_t start_##name = calcTicTime(); 
#define TOC(name) calcTocTime(start_##name);

clock_t calcTicTime();
void calcTocTime(clock_t ticTime);