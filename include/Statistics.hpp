#ifndef __STATISTICS__HPP__
#define __STATISTICS__HPP__
#endif

#include <ctime>
#include <iostream>

class Statistics{
public:
	Statistics();
	int getNcalls() const;
	float getTotalT() const;
	float getAverageT() const;


private:
	int nCalls;
	float totalT;
	float averageT;
	bool isStarted;

};