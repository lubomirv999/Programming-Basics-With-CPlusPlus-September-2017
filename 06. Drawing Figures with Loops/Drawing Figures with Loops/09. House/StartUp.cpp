#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	int size;
	int hyphens = 0;
	int stars = 1;

	cin >> size;

	if (size % 2 == 0)
	{
		stars = 2;
	}

	for (int i = 0; i < (size + 1) / 2; i++)
	{
		hyphens = (size - stars) / 2;

		cout << string(hyphens, '-') << string(stars, '*') << string(hyphens, '-') << endl;

		stars += 2;
	}

	for (int i = 0; i < size - ((size + 1) / 2); i++)
	{
		cout << '|' << string(size - 2, '*') << '|' << endl;
	}

	return 0;
}