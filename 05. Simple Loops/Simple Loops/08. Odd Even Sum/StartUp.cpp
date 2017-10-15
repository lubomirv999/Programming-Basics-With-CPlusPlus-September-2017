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
	int evenSum = 0;
	int oddSum = 0;

	cin >> nums;

	for (int i = 0; i < nums; i++)
	{
		cin >> currentNum;

		if (i % 2 == 0)
		{
			evenSum += currentNum;
		}
		else
		{
			oddSum += currentNum;
		}
	}

	diff = abs(evenSum - oddSum);

	if (diff == 0)
	{
		cout << "Yes" << endl << "Sum = " << evenSum << endl;
	}
	else
	{
		cout << "No" << endl << "Diff = " << diff << endl;
	}

	return 0;
}