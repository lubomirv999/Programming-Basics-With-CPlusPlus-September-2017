#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	int hours, minetes, totalTimes, printHour, printMinutes;

	cin >> hours >> minetes;

	totalTimes = hours * 60 + minetes + 15;
	printHour = totalTimes / 60;
	printMinutes = totalTimes % 60;

	if (printHour >= 24) {
		printHour %= 24;
		cout << printHour << ":";
	}
	else
	{
		cout << printHour << ":";
	}

	if (printMinutes <= 9) {
		cout << "0" << printMinutes << endl;
	}
	else 
	{
		cout << printMinutes << endl;
	}

	return 0;
}