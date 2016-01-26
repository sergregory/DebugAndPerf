#ifndef __PERF__HPP__
#define __PERF__HPP__
#include "perf.hpp"
#endif


int main()
{
	int a =4;
	TIC(loop);
	for(int i = 0; i < 9000000; ++i)
	{
		a = a + 2;
	}
	TOC(loop);
	
    return 0;
}
