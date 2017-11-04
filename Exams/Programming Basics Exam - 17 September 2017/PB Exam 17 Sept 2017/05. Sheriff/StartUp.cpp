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

	double embroideryWidth = 3 * num;
	double embroideryHeight = 2 * num + 8;

	double outsideDots = (embroideryWidth - 1) / 2;
	double innerlineLeft = 0;
	double innerlineRight = 0;

	for (int i = 0; i < 2; i++)
	{
		cout << string(outsideDots, '.') << string(innerlineLeft, '/') << 'x' << string(innerlineRight, '\\') << string(outsideDots, '.') << endl;
		outsideDots--;
		innerlineLeft++;
		innerlineRight++;
	}

	outsideDots = (embroideryWidth - 3) / 2;
	cout << string(outsideDots, '.') << 'x' << '|' << 'x' << string(outsideDots, '.') << endl;

	double halfSize = ceil(num / 2);
	double doubleSize = num * 2 + 1;
	double xSize = num;
	outsideDots = (embroideryWidth - doubleSize) / 2;

	for (int i = 0; i < halfSize; i++)
	{
		cout << string(outsideDots, '.') << string(xSize, 'x') << '|' << string(xSize, 'x') << string(outsideDots, '.') << endl;
		outsideDots--;
		xSize++;
	}

	double halfSizeSmall = num / 2;
	outsideDots = 1;
	xSize = (embroideryWidth - 3) / 2;

	for (int i = 0; i < floor(halfSizeSmall); i++)
	{
		cout << string(outsideDots, '.') << string(xSize, 'x') << '|' << string(xSize, 'x') << string(outsideDots, '.') << endl;
		outsideDots++;
		xSize--;
	}

	outsideDots = (embroideryWidth - 3) / 2;

	cout << string(outsideDots, '.') << '/' << 'x' << '\\' << string(outsideDots, '.') << endl;
	cout << string(outsideDots, '.') << '\\' << 'x' << '/' << string(outsideDots, '.') << endl;


	halfSize = ceil(num / 2);
	doubleSize = num * 2 + 1;
	xSize = num;
	outsideDots = (embroideryWidth - doubleSize) / 2;

	for (int i = 0; i < halfSize; i++)
	{
		cout << string(outsideDots, '.') << string(xSize, 'x') << '|' << string(xSize, 'x') << string(outsideDots, '.') << endl;
		outsideDots--;
		xSize++;
	}

	halfSizeSmall = num / 2;
	outsideDots = 1;
	xSize = (embroideryWidth - 3) / 2;

	for (int i = 0; i < floor(halfSizeSmall); i++)
	{
		cout << string(outsideDots, '.') << string(xSize, 'x') << '|' << string(xSize, 'x') << string(outsideDots, '.') << endl;
		outsideDots++;
		xSize--;
	}

	outsideDots = (embroideryWidth - 3) / 2;
	double finalDots = (embroideryWidth - 1) / 2;
	cout << string(outsideDots, '.') << 'x' << '|' << 'x' << string(outsideDots, '.') << endl;
	cout << string(outsideDots, '.') << '\\' << 'x' << '/' << string(outsideDots, '.') << endl;
	cout << string(finalDots, '.') << 'x' << string(finalDots, '.') << endl;

	return 0;
}