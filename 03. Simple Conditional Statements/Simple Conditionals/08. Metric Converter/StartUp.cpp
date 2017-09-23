#include "stdafx.h"
#include <iostream>
#include <string>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <ctype.h>
#include <algorithm>

using namespace std;

int main()
{
	double size;
	string sourceMetric, destMetric;

	cin >> size >> sourceMetric >> destMetric;

	transform(sourceMetric.begin(), sourceMetric.end(), sourceMetric.begin(), ::tolower);
	transform(destMetric.begin(), destMetric.end(), destMetric.begin(), ::tolower);

	if (sourceMetric == "mm")
	{
		size = size / 1000.0;
	}
	else if (sourceMetric == "cm")
	{
		size = size / 100.0;
	}
	else if (sourceMetric == "mi")
	{
		size = size / 0.000621371192;
	}
	else if (sourceMetric == "in")
	{
		size = size / 39.3700787;
	}
	else if (sourceMetric == "km")
	{
		size = size / 0.001;
	}
	else if (sourceMetric == "ft")
	{
		size = size / 3.2808399;
	}
	else if (sourceMetric == "yd")
	{
		size = size / 1.0936133;
	}
	else if (sourceMetric == "m")
	{
		size = size / 1.0;
	}
	else 
	{
		printf("Wrong Source Metric");
	}


	if (destMetric == "mm")
	{
		size = size * 1000.0;
	}
	else if (destMetric == "cm")
	{
		size = size * 100.0;
	}
	else if (destMetric == "mi")
	{
		size = size * 0.000621371192;
	}
	else if (destMetric == "in")
	{
		size = size * 39.3700787;
	}
	else if (destMetric == "km")
	{
		size = size * 0.001;
	}
	else if (destMetric == "ft")
	{
		size = size * 3.2808399;
	}
	else if (destMetric == "yd")
	{
		size = size * 1.0936133;
	}
	else if (destMetric == "m")
	{
		size = size * 1.0;
	}
	else 
	{
		printf_s("Wrong Dest. Metric");
	}

	printf_s("%f ", size);
	cout << destMetric;
}