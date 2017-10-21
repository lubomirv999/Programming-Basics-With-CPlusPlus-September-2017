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
	int sum = 0;

	cin >> num;

	while (num > 0)
	{
		int digit = num % 10;
		sum += digit;
		num /= 10;
	}

	cout << sum << endl;

	return 0;
}