#include "perf.hpp"

#define TIC(name) clock_t start_##name = calcTicTime(); 
#define TOC(name) calcTocTime(clock_t start_##name);


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
