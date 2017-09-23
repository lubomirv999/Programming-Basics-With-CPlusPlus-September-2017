#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

#define M_PI (3.14159265358979323846)

using namespace std;

int main()
{
	double rad, degrees;
	cin >> rad;

	degrees = rad * (180 / M_PI);

	cout << round(degrees) << endl;

	return 0;
}