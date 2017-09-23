#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	double rows, cols;
	double size = 0;
	double total = 0;
	string screening;

	cin >> screening >> rows >> cols;

	size = rows * cols;

	if (screening == "Premiere")
	{
		total = size * 12;
	}
	else if (screening == "Normal")
	{
		total = size * 7.50;
	}
	else // Screening = Discount
	{
		total = size * 5;
	}

	printf("%.2f", total);

	return 0;
}