#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>
#include <stdio.h>
#include <ctype.h>
#include <algorithm>

using namespace std;

int main()
{
	double sales, profit;
	double commision = -1;
	bool isError = false;
	string town;

	cin >> town >> sales;

	transform(town.begin(), town.end(), town.begin(), ::tolower);

	if (town == "sofia")
	{
		if (sales >= 0 && sales <= 500)
		{
			commision = 0.05;
		}
		else if (sales > 500 && sales <= 1000)
		{
			commision = 0.07;
		}
		else if (sales > 1000 && sales <= 10000)
		{
			commision = 0.08;
		}
		else if (sales > 10000)
		{
			commision = 0.12;
		}
	}
	else if (town == "varna")
	{
		if (sales >= 0 && sales <= 500)
		{
			commision = 0.045;
		}
		else if (sales > 500 && sales <= 1000)
		{
			commision = 0.075;
		}
		else if (sales > 1000 && sales <= 10000)
		{
			commision = 0.1;
		}
		else if (sales > 10000)
		{
			commision = 0.13;
		}
	}
	else if (town == "plovdiv")
	{
		if (sales >= 0 && sales <= 500)
		{
			commision = 0.055;
		}
		else if (sales > 500 && sales <= 1000)
		{
			commision = 0.08;
		}
		else if (sales > 1000 && sales <= 10000)
		{
			commision = 0.12;
		}
		else if (sales > 10000)
		{
			commision = 0.145;
		}
	}

	if (commision >= 0)
	{
		profit = sales * commision;

		printf("%.2f", profit);
	}
	else
	{
		cout << "error" << endl;
	}

	return 0;
}