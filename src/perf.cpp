#include "perf.hpp"

perf_time_t calcTicTime(){
	return clock();
}
void calcTocTime(perf_time_t ticTime){
	std::cout << float(clock() - ticTime)/ CLOCKS_PER_SEC << " sec "<< std::endl;
}
Statistics timeStatistics;
void startStatistics(){
	
	std::cout<<"Ncalls: "<<timeStatistics.getNcalls()<<std::endl;
	std::cout<<"totalT: "<<timeStatistics.getTotalT()<<std::endl;
	std::cout<<"averageT: "<<timeStatistics.getAverageT()<<std::endl;
	std::cout<<"isStarted: "<<timeStatistics.getIsStarted()<<std::endl;
	std::cout<<std::endl;
}
void finishStatistics(){
	timeStatistics.setAverageT();
	timeStatistics.setIsFinished();

	std::cout<<std::endl;
	std::cout<<"Ncalls: "<<timeStatistics.getNcalls()<<std::endl;
	std::cout<<"totalT: "<<timeStatistics.getTotalT()<<std::endl;
	std::cout<<"averageT: "<<timeStatistics.getAverageT()<<std::endl;
	std::cout<<"isStarted: "<<timeStatistics.getIsStarted()<<std::endl;
	std::cout<<std::endl;
}


perf_time_t calcTimeStatistics(){
		
	return clock();
}
void calcEmitStatistics(perf_time_t ticTime){
	float oneTime = float(clock() - ticTime)/ CLOCKS_PER_SEC;
	timeStatistics.inctementNcalls();
	timeStatistics.inctementTotalT(oneTime);
	std::cout << oneTime << " sec "<< std::endl;
}



