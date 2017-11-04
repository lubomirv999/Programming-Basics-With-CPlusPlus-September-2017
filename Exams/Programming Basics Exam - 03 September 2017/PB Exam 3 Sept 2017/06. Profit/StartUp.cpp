#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	int coinsOne, coinsTwo, coinsFive, total;

	cin >> coinsOne >> coinsTwo >> coinsFive >> total;

	for (int ones = 0; ones <= coinsOne; ones++)
	{
		for (int twos = 0; twos <= coinsTwo; twos++)
		{
			for (int fives = 0; fives <= coinsFive; fives++)
			{
				double currentSum = (ones * 1) + (twos * 2) + (fives * 5);

				if (currentSum == total)
				{
					printf("%d * 1 lv. + %d * 2 lv. + %d * 5 lv. = %d lv.",
						ones, twos, fives, total);

					cout << endl;
				}
			}
		}
	}

	return 0;
}