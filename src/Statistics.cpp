#include "Statistics.hpp"


Statistics::Statistics(){
	nCalls = 0;
	totalT = 0;
	averageT = 0;
	isStarted = 1;
}

int Statistics::getNcalls() const{
	return nCalls;
}
float Statistics::getTotalT() const{
	return totalT;
}
float Statistics::getAverageT() const{
	return averageT;
}
