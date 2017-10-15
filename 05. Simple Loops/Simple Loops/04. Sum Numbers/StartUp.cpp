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
	int sum = 0;

	cin >> nums;

	for (int i = 0; i < nums; i++)
	{
		cin >> currentNum;
		sum += currentNum;
	}

	cout << sum << endl;

	return 0;
}