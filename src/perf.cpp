#include "perf.hpp"

clock_t calcTicTime(){
	clock_t t = clock();
	return t;
}
void calcTocTime(clock_t ticTime){
	std::cout << float(clock() - ticTime)/ CLOCKS_PER_SEC << " sec "<< std::endl;
}