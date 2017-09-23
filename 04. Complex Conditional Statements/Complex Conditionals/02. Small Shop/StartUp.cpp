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
	string product, town;
	double quantity, productPrice, sum;

	cin >> product >> town >> quantity;

	transform(product.begin(), product.end(), product.begin(), ::tolower);
	transform(town.begin(), town.end(), town.begin(), ::tolower);

	if (town == "sofia")
	{
		if (product == "coffee")
		{
			productPrice = 0.5;
		}
		else if (product == "water")
		{
			productPrice = 0.8;
		}
		else if (product == "beer")
		{
			productPrice = 1.2;
		}
		else if (product == "sweets")
		{
			productPrice = 1.45;
		}
		else // Product is peanuts
		{
			productPrice = 1.6;
		}
	}
	else if (town == "plovdiv")
	{
		if (product == "coffee")
		{
			productPrice = 0.4;
		}
		else if (product == "water")
		{
			productPrice = 0.7;
		}
		else if (product == "beer")
		{
			productPrice = 1.15;
		}
		else if (product == "sweets")
		{
			productPrice = 1.30;
		}
		else // Product is peanuts
		{
			productPrice = 1.5;
		}
	}
	else // Town is Varna 
	{
		if (product == "coffee")
		{
			productPrice = 0.45;
		}
		else if (product == "water")
		{
			productPrice = 0.7;
		}
		else if (product == "beer")
		{
			productPrice = 1.1;
		}
		else if (product == "sweets")
		{
			productPrice = 1.35;
		}
		else // Product is peanuts
		{
			productPrice = 1.55;
		}
	}

	sum = quantity * productPrice;
	
	cout << sum << endl;

	return 0;
}