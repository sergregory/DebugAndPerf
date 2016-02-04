#ifndef __STATISTICS__HPP__
#define __STATISTICS__HPP__
#endif

#include <ctime>
#include <iostream>
#include <string.h>
#include <vector>

class Statistics{
public:
	Statistics();
	
	void setStasticsName(std::string sName);
	std::string getStasticsName();
	void setNewStatistic();

	int getNcalls() const;	
	float getTotalT() const;	
	float getAverageT() const;	
	bool getIsStarted() const;	

	int inctementNcalls();
	float inctementTotalT(float oneTime);
	float setAverageT();
	bool changeIsStartedTrue();
	bool changeIsStartedFalse();

private:
	std::vector <std::string> stasticsName;
	std::vector<int> nCalls;
	std::vector <float> totalT;
	std::vector <float> averageT;
	bool isStarted;

};