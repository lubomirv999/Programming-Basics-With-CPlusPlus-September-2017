#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	double num;

	cin >> num;

	double height = 2 * num + 1;
	double width = 2 * num + 3;

	double outsideDots = 0;
	double innerDots = num;

	for (int i = 0; i < num - 1; i++)
	{
		cout << string(outsideDots, '.') << '*' << string(innerDots, '.') << '*' << string(innerDots, '.') << '*' << string(outsideDots, '.') << endl;
		outsideDots++;
		innerDots--;
	}

	outsideDots = (width - 5) / 2;

	cout << string(outsideDots, '.') << "*****" << string(outsideDots, '.') << endl;
	cout << string(width, '*') << endl;
	cout << string(outsideDots, '.') << "*****" << string(outsideDots, '.') << endl;

	outsideDots = (width - 4 - 3) / 2;
	innerDots = 2;

	for (int i = num - 2; i >= 0; i--)
	{
		cout << string(outsideDots, '.') << '*' << string(innerDots, '.') << '*' << string(innerDots, '.') << '*' << string(outsideDots, '.') << endl;
		outsideDots--;
		innerDots++;
	}

	return 0;
}