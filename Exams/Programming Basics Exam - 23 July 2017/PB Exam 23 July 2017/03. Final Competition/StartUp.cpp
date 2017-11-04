#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	double dancers, points;
	string season, place;

	cin >> dancers >> points;
	cin >> season >> place;

	double money = 0;

	if (place == "Bulgaria")
	{
		money = points * dancers;
	}
	else if (place == "Abroad")
	{
		money = points * dancers;
		double fiftyPercentOfTheMoney = money / 2;
		money += fiftyPercentOfTheMoney;
	}

	double expensesInPercentage = 0;

	if (place == "Bulgaria" && season == "summer")
	{
		expensesInPercentage = 0.05;
	}
	else if (place == "Bulgaria" && season == "winter")
	{
		expensesInPercentage = 0.08;
	}
	else if (place == "Abroad" && season == "summer")
	{
		expensesInPercentage = 0.1;
	}
	else if (place == "Abroad" && season == "winter")
	{
		expensesInPercentage = 0.15;
	}

	double moneyAfterExpenses = money * expensesInPercentage;
	money -= moneyAfterExpenses;

	double moneyForCharity = money * 0.75;
	money -= moneyForCharity;

	double moneyForDancers = money / dancers;

	cout << "Charity - " << fixed << setprecision(2) << moneyForCharity << endl;
	cout << "Money per dancer - " << fixed << setprecision(2) << moneyForDancers << endl;

	return 0;
}