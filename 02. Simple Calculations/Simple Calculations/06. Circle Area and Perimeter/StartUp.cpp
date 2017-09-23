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
	double r, area, perimeter;

	cin >> r;

	area = M_PI * r * r;
	perimeter = 2 * M_PI * r;

	cout << area << endl;
	cout << perimeter << endl;

	return 0;
}