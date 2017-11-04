#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	double pictures;
	string typeOfPictures, typeOfOrder;

	cin >> pictures >> typeOfPictures >> typeOfOrder;

	double price = 0;
	double total = 0;
	double discount = 0;

	if (typeOfPictures == "9X13")
	{
		price = 0.16;

		if (pictures >= 50)
		{
			discount = 0.05;
		}
	}
	else if (typeOfPictures == "10X15")
	{
		price = 0.16;

		if (pictures >= 80)
		{
			discount = 0.03;
		}
	}
	else if (typeOfPictures == "13X18")
	{
		price = 0.38;

		if (pictures >= 50 && pictures <= 100)
		{
			discount = 0.03;
		}
		else if (pictures > 100)
		{
			discount = 0.05;
		}
	}
	else if (typeOfPictures == "20X30")
	{
		price = 2.90;

		if (pictures >= 10 && pictures <=50)
		{
			discount = 0.07;
		}
		else if (pictures > 50)
		{
			discount = 0.09;
		}
	}

	total = pictures * price;

	total = total - (total * discount);

	if (typeOfOrder == "online")
	{
		total = total - (total * 0.02);
	}

	cout << fixed << setprecision(2) << total << "BGN" << endl;

	return 0;
}