#ifndef __STATISTICS__HPP__
#define __STATISTICS__HPP__
#endif

#include <ctime>
#include <iostream>

class Statistics{
public:
	Statistics();
	int getNcalls() const;
	int inctementNcalls();
	float getTotalT() const;
	float inctementTotalT(float oneTime);
	float getAverageT() const;
	float setAverageT();
	bool getIsStarted() const;
	bool setIsFinished();

private:
	int nCalls;
	float totalT;
	float averageT;
	bool isStarted;

};