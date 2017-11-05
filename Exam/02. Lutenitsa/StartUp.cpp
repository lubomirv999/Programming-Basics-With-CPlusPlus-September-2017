#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>
#include <climits>

using namespace std;

int main()
{
	double tomatoesInKg, cartridges, jars;

	cin >> tomatoesInKg >> cartridges >> jars;

	double totalKg = tomatoesInKg / 5;
	double totalJars = totalKg / 0.535;
	double totalCartridges = totalJars / jars;

	cout << "Total lutenica: " << floor(totalKg) << " kilograms." << endl;

	if (totalCartridges > cartridges)
	{
		double diffCartridges = totalCartridges - cartridges;
		double diffJars = totalJars - (cartridges * jars);

		cout << floor(diffCartridges) << " boxes left." << endl;
		cout << floor(diffJars) << " jars left." << endl;
	}
	else if (totalCartridges < cartridges)
	{
		double diffCartridges = abs(totalCartridges - cartridges);
		double diffJars = abs(totalJars - (cartridges * jars));

		cout << floor(diffCartridges) << " more boxes needed." << endl;
		cout << floor(diffJars) << " more jars needed." << endl;
	}

	return 0;
}