#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	double days;

	cin >> days;

	double rakia = 0;
	double rakiaDegree = 0;
	double totalRakiaLiters = 0;
	double totalRakia = 0;

	for (int i = 0; i < days; i++)
	{
		cin >> rakia >> rakiaDegree;

		totalRakiaLiters += rakia;
		totalRakia += rakia * rakiaDegree;
	}

	rakiaDegree = totalRakia / totalRakiaLiters;

	cout << "Liter: " << fixed << setprecision(2) << totalRakiaLiters << endl;
	cout << "Degrees: " << fixed << setprecision(2) << rakiaDegree << endl;

	if (rakiaDegree <= 38)
	{
		cout << "Not good, you should baking!" << endl;
	}
	else if (rakiaDegree > 38 && rakiaDegree < 42)
	{
		cout << "Super!" << endl;
	}
	else if (rakiaDegree >= 42)
	{
		cout << "Dilution with distilled water!" << endl;
	}

	return 0;
}