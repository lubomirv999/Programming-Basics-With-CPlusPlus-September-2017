#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	double b1, b2, h, area;

	cin >> b1;
	cin >> b2;
	cin >> h;

	area = ((b1 + b2) * h) / 2;

	cout << area << endl;

	return 0;
}