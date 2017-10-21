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

	bool prime = (num > 1);

	for (int i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			prime = false;
			break;
		}
	}

	if (prime)
	{
		cout << "Prime";
	}
	else
	{
		cout << "Not prime";
	}

	return 0;
}