#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	int num;

	cin >> num;

	int width = 5 * num;

	double outsideDots = num;
	double innerOctothorps = width - (num * 2);
	double lastDots = 0;

	for (int i = 0; i < num / 2; i++)
	{
		cout << string(outsideDots, '.') << string(innerOctothorps, '#') << string(outsideDots, '.') << endl;
		outsideDots++;
		innerOctothorps -= 2;

		if (i == num / 2 - 1)
		{
			lastDots = outsideDots;
		}
	}

	double rows = num / 2 + 1;
	double innerDots = width - (lastDots) * 2 - 2;

	for (int i = 0; i < rows; i++)
	{
		cout << string(lastDots, '.') << '#' << string(innerDots, '.') << '#' << string(lastDots, '.') << endl;
		lastDots++;
		innerDots -= 2;
	}

	outsideDots = (width - num) / 2;

	cout << string(outsideDots, '.') << string(num, '#') << string(outsideDots, '.') << endl;

	outsideDots = (width - (num + 4)) / 2;

	for (int i = 0; i < num / 2; i++)
	{
		cout << string(outsideDots, '.') << string(num + 4, '#') << string(outsideDots, '.') << endl;
	}

	outsideDots = (width - 10) / 2;
	cout << string(outsideDots, '.') << "D^A^N^C^E^" << string(outsideDots, '.') << endl;

	innerOctothorps = num + 4;
	outsideDots = (width - innerOctothorps) / 2;

	for (int i = 0; i < num / 2 + 1; i++)
	{
		cout << string(outsideDots, '.') << string(innerOctothorps, '#') << string(outsideDots, '.') << endl;
	}

	return 0;
}