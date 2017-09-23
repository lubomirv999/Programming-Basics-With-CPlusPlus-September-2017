#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	int firstCompetitor, secondCompetitor, thirdCompetitor, sum, minutes, seconds;

	cin >> firstCompetitor >> secondCompetitor >> thirdCompetitor;

	sum = firstCompetitor + secondCompetitor + thirdCompetitor;
	minutes = sum / 60;
	seconds = sum % 60;

	cout << minutes << ':';
	printf("%.2d", seconds);

	return 0;
}