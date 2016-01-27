#include "perf.hpp"


int main()
{
	int a =4;
	for(int i = 0; i < 4; ++i)
	{
		TIME(loop);
		for(int i = 0; i < 9000000; ++i)
		{
			a = a + 2;
		}
		EMIT(loop);
	}
    return 0;
}
