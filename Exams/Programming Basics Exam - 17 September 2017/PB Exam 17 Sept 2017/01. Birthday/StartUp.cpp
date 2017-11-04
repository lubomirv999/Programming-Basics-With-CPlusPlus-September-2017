#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	double lengthInCm, widthInCm, heightInCm, percent;

	cin >> lengthInCm >> widthInCm >> heightInCm >> percent;

	double volume = lengthInCm * widthInCm * heightInCm;
	double liters = volume * 0.001;
	percent = percent * 0.01;
	double neededLiters = liters*(1 - percent);

	cout << fixed << setprecision(3) << neededLiters << endl;

	return 0;
}