#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	double inches, centimeters;

	cin >> inches;

	centimeters = inches * 2.54;

	cout << centimeters << endl;

	return 0;
}