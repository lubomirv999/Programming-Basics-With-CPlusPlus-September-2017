#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	string contractLength, contractType, internet;
	double months;

	cin >> contractLength >> contractType >> internet >> months;

	double contractPrice = 0;

	if (contractLength == "one")
	{
		if (contractType == "Small")
		{
			contractPrice = 9.98;
		}
		else if (contractType == "Middle")
		{
			contractPrice = 18.99;
		}
		else if (contractType == "Large")
		{
			contractPrice = 25.98;
		}
		else if (contractType == "ExtraLarge")
		{
			contractPrice = 35.99;
		}
	}
	else if (contractLength == "two")
	{
		if (contractType == "Small")
		{
			contractPrice = 8.58;
		}
		else if (contractType == "Middle")
		{
			contractPrice = 17.09;
		}
		else if (contractType == "Large")
		{
			contractPrice = 23.59;
		}
		else if (contractType == "ExtraLarge")
		{
			contractPrice = 31.79;
		}
	}

	double priceWithInternet = 0;

	if (internet == "yes")
	{
		if (contractPrice <= 10)
		{
			priceWithInternet = contractPrice + 5.50;
		}
		else if (contractPrice <= 30)
		{
			priceWithInternet = contractPrice + 4.35;
		}
		else if (contractPrice > 30)
		{
			priceWithInternet = contractPrice + 3.85;
		}
	}
	else if (internet == "no")
	{
		priceWithInternet = contractPrice;
	}

	if (contractLength == "two")
	{
		priceWithInternet *= 0.9625;
	}

	double totalPrice = priceWithInternet * months;

	cout << fixed << setprecision(2) << totalPrice << " lv."<< endl;

	return 0;
}