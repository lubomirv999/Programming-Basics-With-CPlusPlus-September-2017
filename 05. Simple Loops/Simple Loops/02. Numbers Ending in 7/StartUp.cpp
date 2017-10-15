#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	for (int i = 7; i <= 1000; i++) 
	{
		if (i % 10 == 7) 
		{
			cout << i << " ";
		}
	}

	return 0;
}