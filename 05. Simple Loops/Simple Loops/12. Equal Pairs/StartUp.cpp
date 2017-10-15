#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main() 
{
	int num;

	cin >> num;

	int sum = 0;
	int difference = 0;
	int previous = 0;
	int maxDiff = 0;

	for (int i = 0; i < num; i++)
	{
		int number1, number2;

		cin >> number1 >> number2;

		sum = number1 + number2;
		difference = abs(number1 + number2 - previous);
		previous = sum;

		if (difference > maxDiff && sum != difference)
		{
			maxDiff = difference;
		}
	}

	if (difference != 0 && sum != difference)
	{
		cout << "No, maxdiff=" << maxDiff << endl;
	}
	else 
	{
		cout << "Yes, value=" << sum << endl;
	}
}