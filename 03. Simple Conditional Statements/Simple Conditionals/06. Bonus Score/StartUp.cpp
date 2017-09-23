#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	double num, points;

	cin >> num;

	if (num <= 100)
	{
		points += 5;
	}
	else if (num >= 100 && num <= 1000)
	{
		points += num * 0.2;
	}
	else
	{
		points += num * 0.1;
	}

	if ((int)num % 2 == 0)
	{
		points += 1;
	}
	else if ((int)num % 10 == 5)
	{
		points += 2;
	}

	num += points;

	cout << points << endl;
	cout << num << endl;

	return 0;
}