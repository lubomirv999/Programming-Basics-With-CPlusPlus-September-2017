#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	double celsius, fahrenheit;

	cin >> celsius;

	fahrenheit = celsius * 9.0 / 5.0 + 32.0;

	cout << fahrenheit << endl;

	return 0;
}