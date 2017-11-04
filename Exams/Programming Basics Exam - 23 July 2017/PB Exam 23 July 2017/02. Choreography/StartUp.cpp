#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	double steps, dancers, days;

	cin >> steps >> dancers >> days;

	double stepsPerDayInPercentage = ceil(((steps / days) / steps) * 100);
	double stepsPerDancerInPercentage = stepsPerDayInPercentage / dancers;

	if (stepsPerDayInPercentage <= 13)
	{
		cout << "Yes, they will succeed in that goal! " << fixed << setprecision(2) << stepsPerDancerInPercentage << "%." << endl;
	}
	else if (stepsPerDayInPercentage > 13)
	{
		cout << "No, They will not succeed in that goal! Required " << fixed << setprecision(2) << stepsPerDancerInPercentage << "% steps to be learned per day." << endl;
	}

	return 0;
}