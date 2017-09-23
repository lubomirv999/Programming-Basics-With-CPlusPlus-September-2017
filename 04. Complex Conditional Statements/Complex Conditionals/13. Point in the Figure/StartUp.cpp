#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	int h, x, y;

	cin >> h >> x >> y;

	bool outRectangle1 = (x < 0 || x > 3 * h) || (y < 0 || y > h);
	bool outRectangle2 = (x < h || x > 2 * h) || (y < h || y > 4 * h);

	bool inRectangle1 = (x > 0 && x < 3 * h) && (y > 0 && y < h);
	bool inRectangle2 = (x > h && x < 2 * h) && (y > h && y < 4 * h);

	bool commonBorder = (x > h && x < 2 * h) && y == h;

	if (outRectangle1 && outRectangle2) 
	{
		cout << "outside" << endl;
	}
	else if (inRectangle1 || inRectangle2 || commonBorder) 
	{
		cout << "inside" << endl;
	}
	else 
	{
		cout << "border" << endl;
	}

	return 0;
}