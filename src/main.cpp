#include "perf.hpp"
#include <iostream>
#include <ctime>
using namespace std;

#define TIC(name) clock_t start_##name  = clock();
#define TOC(name) std::cout << "Time for " #name << ": " << float(clock() - start_##name) / CLOCKS_PER_SEC << " sec" << std::endl


int main()
{
	int a =4;
	//clock_t t1 = clock();
	TIC(loop);
	for(int i = 0; i < 9000000; ++i)
	{
		a = a + 2;
	}
	TOC(loop);
	
	//clock_t t2 = clock();
	//cout << float(t2 - t1)/ CLOCKS_PER_SEC << " sec "<< endl;
    return 0;
}
