#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	int nums, currentNum;
	int minNum = INT32_MAX;

	cin >> nums;

	for (int i = 0; i < nums; i++)
	{
		cin >> currentNum;

		if (currentNum < minNum)
		{
			minNum = currentNum;
		}
	}

	cout << minNum << endl;

	return 0;
}

