#include "perf.hpp"


int main()
{
	int a =4;
	
	for(int i = 0; i < 9000000; ++i)
	{
		TIC(loop);
		a = a + 2;
		TOC(loop);
	}
		
    return 0;
}
