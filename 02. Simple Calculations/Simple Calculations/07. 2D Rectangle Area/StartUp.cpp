#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	double x1, y1, x2, y2, width, height, area, perimeter;
	cin >> x1 >> y1 >> x2 >> y2;

	width = abs(x2 - x1);
	height = abs(y1 - y2);
	area = width * height;
	perimeter = 2 * (width + height);

	cout << area << endl;
	cout << perimeter << endl;
	
	return 0;
}