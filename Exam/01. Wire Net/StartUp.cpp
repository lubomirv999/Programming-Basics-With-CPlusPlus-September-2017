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
	double length, width, height, priceForMeter, weightOfOneMeter;

	cin >> length >> width >> height >> priceForMeter >> weightOfOneMeter;

	double lengthOfNet = 2 * length + 2 * width;
	double priceOfNet = lengthOfNet * priceForMeter;
	double sizeOfNet = lengthOfNet * height;
	double weightOfNet = sizeOfNet * weightOfOneMeter;

	cout << lengthOfNet << endl;
	cout << fixed << setprecision(2) << priceOfNet << endl;
	cout << fixed << setprecision(3) << weightOfNet << endl;

	return 0;
}