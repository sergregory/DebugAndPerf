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
bool Statistics::getIsStarted() const{
	return isStarted;
}

int Statistics::inctementNcalls(){
	return nCalls++;
}
float Statistics::inctementTotalT(float oneTime){
	totalT = totalT + oneTime;
	return totalT;
}
float Statistics::setAverageT(){
	averageT = totalT/nCalls;
	return averageT;
}
bool Statistics::setIsFinished(){
	isStarted = 0;
	return isStarted;
}
