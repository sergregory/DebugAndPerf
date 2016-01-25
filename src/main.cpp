#include "perf.hpp"
#include <iostream>
#include <ctime>
using namespace std;

#define FUNCTION(id,name) void _##id() {clock_t t1 = clock(); cout <<#name << float(t1)/ CLOCKS_PER_SEC << " sec "<< endl;};
FUNCTION (TIC,loop)
FUNCTION (TOC,loop)
	


int main()
{
	int a =4;
	//clock_t t1 = clock();
	_TIC();
	for(int i = 0; i < 9000000; ++i)
	{
		a = a + 2;
	}
	_TOC();
	
	//clock_t t2 = clock();
	//cout << float(t2 - t1)/ CLOCKS_PER_SEC << " sec "<< endl;
    return 0;
}
