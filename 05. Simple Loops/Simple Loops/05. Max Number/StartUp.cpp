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
	int maxNum = INT32_MIN;

	cin >> nums;

	for (int i = 0; i < nums; i++)
	{
		cin >> currentNum;
		
		if (currentNum > maxNum)
		{
			maxNum = currentNum;
		}
	}

	cout << maxNum << endl;

	return 0;
}

