#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	double dollars, levs;

	cin >> dollars;

	levs = dollars * 1.79549;

	printf("%.2f BGN", levs);

	return 0;
}