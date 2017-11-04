#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	double length, width, wardrobeSide;

	cin >> length >> width >> wardrobeSide;

	double wardrobeSideInCentimetes = wardrobeSide * 100;

	double hallSizeInCentimeters = (length * 100) * (width * 100);
	double wardrobe = wardrobeSideInCentimetes * wardrobeSideInCentimetes;
	double bench = hallSizeInCentimeters / 10;
	double freeSpace = hallSizeInCentimeters - wardrobe - bench;
	double dancers = floor(freeSpace / 7040);

	cout << dancers << endl;

	return 0;
}