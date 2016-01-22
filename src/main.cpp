#include "perf.hpp"
#include <iostream>
#include <time.h>
using namespace std;

int main()
{

	int a =4;
	long t1 = clock();
	for(int i = 0; i < 3; ++i)
	{
		
		a = a + 2;
		

	}
	long t2 = clock();
	cout << t2 - t1 << endl;
    return 0;
}
