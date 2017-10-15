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
	double max = 0.0;
	double sum = 0.0;

	cin >> nums;

	for (double i = 0; i < nums; i++) 
	{
		cin >> currentNum;

		if (currentNum > max) {
			max = currentNum;
		}

		sum += currentNum;
	}

	if (sum - max == max) 
	{
		printf("Yes\nSum = %.0f", max);
	}
	else 
	{
		printf("No\nDiff = %.0f", abs(max - (sum - max)));
	}

	return 0;
}