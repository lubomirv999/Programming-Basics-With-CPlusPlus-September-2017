#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	double numberOfTables, lengthOfTables, widthOfTables;

	cin >> numberOfTables >> lengthOfTables >> widthOfTables;

	double totalArea = numberOfTables * (lengthOfTables + 2 * 0.3) * (widthOfTables + 2 * 0.3);
	double totalChecked = numberOfTables * (lengthOfTables / 2) * (lengthOfTables / 2);
	double priceInDollars = totalArea * 7 + totalChecked * 9;
	double priceInLeva = priceInDollars * 1.85;

	cout << fixed << setprecision(2) << priceInDollars << " USD" << endl;
	cout << fixed << setprecision(2) << priceInLeva << " BGN" << endl;

	return 0;
}