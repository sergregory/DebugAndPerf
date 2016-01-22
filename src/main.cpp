#include "perf.hpp"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int a =4;
	clock_t t1 = clock();
	for(int i = 0; i < 900000; ++i)
	{
		a = a + 2;
	}
	clock_t t2 = clock();
	cout << float(t2 - t1)/ CLOCKS_PER_SEC << " sec "<< endl;
    return 0;
}
