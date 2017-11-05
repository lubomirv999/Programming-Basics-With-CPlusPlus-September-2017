#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>
#include <climits>

using namespace std;

int main()
{
	double weightOfPackage;
	string serviceType;
	double distanceInKm;

	cin >> weightOfPackage >> serviceType >> distanceInKm;

	double pricePerKm = 0;
	double totalSumStandart = 0;

	if (weightOfPackage < 1)
	{
		pricePerKm = 0.03;
	}
	else if (weightOfPackage >= 1 && weightOfPackage <= 10)
	{
		pricePerKm = 0.05;
	}
	else if (weightOfPackage >= 11 && weightOfPackage <= 40)
	{
		pricePerKm = 0.1;
	}
	else if (weightOfPackage >= 41 && weightOfPackage <= 90)
	{
		pricePerKm = 0.15;
	}
	else if (weightOfPackage >= 91 && weightOfPackage <= 150)
	{
		pricePerKm = 0.2;
	}

	// totalSumBeforeExpress
	totalSumStandart = pricePerKm * distanceInKm;

	double expressPricePerKm = 0;
	double expressPricePerKg = 0;
	double expressTotalPrice = 0;

	if (serviceType == "express")
	{
		if (weightOfPackage < 1)
		{
			expressPricePerKm = pricePerKm * 0.8;
		}
		else if (weightOfPackage >= 1 && weightOfPackage <= 10)
		{
			expressPricePerKm = pricePerKm * 0.4;
		}
		else if (weightOfPackage >= 11 && weightOfPackage <= 40)
		{
			expressPricePerKm = pricePerKm * 0.05;
		}
		else if (weightOfPackage >= 41 && weightOfPackage <= 90)
		{
			expressPricePerKm = pricePerKm * 0.02;
		}
		else if (weightOfPackage >= 91 && weightOfPackage <= 150)
		{
			expressPricePerKm = pricePerKm * 0.01;
		}

		expressPricePerKg = weightOfPackage * expressPricePerKm;
		expressTotalPrice = distanceInKm * expressPricePerKg;
	}

	double totalSum = totalSumStandart + expressTotalPrice;

	cout << "The delivery of your shipment with weight of " << fixed << setprecision(3) << weightOfPackage << " kg. would cost " << fixed << setprecision(2) << totalSum << " lv." << endl;

	return 0;
}