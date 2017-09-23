#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	double quantity, productPrice, sum;
	bool isError = false;
	string fruit, day;

	cin >> fruit >> day >> quantity;

	transform(fruit.begin(), fruit.end(), fruit.begin(), ::tolower);
	transform(day.begin(), day.end(), day.begin(), ::tolower);

	if (day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" ||
		day == "friday")
	{
		if (fruit == "banana")
		{
			productPrice = 2.5;
		}
		else if (fruit == "apple")
		{
			productPrice = 1.2;
		}
		else if (fruit == "orange")
		{
			productPrice = 0.85;
		}
		else if (fruit == "grapefruit")
		{
			productPrice = 1.45;
		}
		else if (fruit == "kiwi")
		{
			productPrice = 2.7;
		}
		else if (fruit == "pineapple")
		{
			productPrice = 5.5;
		}
		else if (fruit == "grapes")
		{
			productPrice = 3.85;
		}
		else
		{
			isError = true;
		}
	}
	else if (day == "saturday" || day == "sunday")
	{
		if (fruit == "banana")
		{
			productPrice = 2.7;
		}
		else if (fruit == "apple")
		{
			productPrice = 1.25;
		}
		else if (fruit == "orange")
		{
			productPrice = 0.90;
		}
		else if (fruit == "grapefruit")
		{
			productPrice = 1.60;
		}
		else if (fruit == "kiwi")
		{
			productPrice = 3;
		}
		else if (fruit == "pineapple")
		{
			productPrice = 5.60;
		}
		else if (fruit == "grapes")
		{
			productPrice = 4.20;
		}
		else
		{
			isError = true;
		}
	}
	else
	{
		isError = true;
	}

	if (isError)
	{
		cout << "error" << endl;
	}
	else
	{
		sum = quantity * productPrice;

		printf("%.2f", sum);
	}

	return 0;
}