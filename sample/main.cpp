#include "perf.hpp"


int main()
{
	int a =4;
	startStatistics();
	for(int i = 0; i < 4; ++i)
	{
		TIME(loop1);
		for(int i = 0; i < 9000000; ++i)
		{
			a = a + 2;
		}
		EMIT(loop1);
	}
	finishStatistics();
	startStatistics();
	for(int i = 0; i < 4; ++i)
	{
		TIME(loop2);
		for(int i = 0; i < 9000000; ++i)
		{
			a = a + 2;
		}
		EMIT(loop2);
	}
	finishStatistics();

	//getAllStatistics();


	
    return 0;
}
