#include "Statistics.hpp"


Statistics::Statistics(){
	changeIsStartedFalse();
}
void Statistics::setStasticsName(std::string sName){
	stasticsName.push_back(sName);
}
std::string Statistics::getStasticsName(){
	return stasticsName.back();
}
void Statistics::setNewStatistic(){
	nCalls.push_back(0);
	totalT.push_back(0);
	averageT.push_back(0);
}

int Statistics::getNcalls() const{
	return nCalls.back();
}
float Statistics::getTotalT() const{
	return totalT.back();
}
float Statistics::getAverageT() const{
	return averageT.back();
}
bool Statistics::getIsStarted() const{
	return isStarted;
}

int Statistics::inctementNcalls(){
	nCalls.push_back(nCalls.back()+1);
	return nCalls.back();
}
float Statistics::inctementTotalT(float oneTime){
	totalT.push_back(totalT.back() + oneTime);
	return totalT.back();
}
float Statistics::setAverageT(){
	averageT.push_back(totalT.back()/nCalls.back());
	return averageT.back();
}
bool Statistics::changeIsStartedTrue(){
	isStarted = 1;
	return isStarted;
}
bool Statistics::changeIsStartedFalse(){
	isStarted = 0;
	return isStarted;
}
