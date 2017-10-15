#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	int nums, currentNum, diff;
	int firstSum = 0;
	int secondSum = 0;

	cin >> nums;

	for (int i = 0; i < nums; i++)
	{
		cin >> currentNum;

		firstSum += currentNum;
	}

	for (int i = 0; i < nums; i++)
	{
		cin >> currentNum;

		secondSum += currentNum;
	}

	diff = abs(firstSum - secondSum);

	if (diff == 0)
	{
		cout << "Yes, sum = " << firstSum << endl;
	}
	else
	{
		cout << "No, diff = " << diff << endl;
	}

	return 0;
}