#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	double area, a, h;
	cin >> a >> h;

	area = a * h / 2;

	printf("%.2f", area);
	
	return 0;
}