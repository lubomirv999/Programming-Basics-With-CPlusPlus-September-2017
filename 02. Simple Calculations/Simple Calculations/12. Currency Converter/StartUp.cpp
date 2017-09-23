#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	double moneyToConvert, result;
	double BGN = 1;
	double USD = BGN * 1.79549;
	double EUR = BGN * 1.95585;
	double GBP = BGN * 2.53405;

	string inputCurrency, resultCurrency;

	cin >> moneyToConvert;
	cin >> inputCurrency;
	cin >> resultCurrency;

	if (inputCurrency == "BGN")
	{
		if (resultCurrency == "USD")
		{
			result = (moneyToConvert * BGN) / USD;
		}
		else if (resultCurrency == "EUR")
		{
			result = (moneyToConvert * BGN) / EUR;
		}
		else
		{
			result = (moneyToConvert * BGN) / GBP;
		}
	}
	else if (inputCurrency == "USD")
	{
		if (resultCurrency == "BGN")
		{
			result = (moneyToConvert * USD) / BGN;
		}
		else if (resultCurrency == "EUR")
		{
			result = (moneyToConvert * USD) / EUR;
		}
		else
		{
			result = (moneyToConvert * USD) / GBP;
		}
	}
	else if (inputCurrency == "EUR")
	{
		if (resultCurrency == "BGN")
		{
			result = (moneyToConvert * EUR) / BGN;
		}
		else if (resultCurrency == "USD")
		{
			result = (moneyToConvert * EUR) / USD;
		}
		else
		{
			result = (moneyToConvert * EUR) / GBP;
		}
	}
	else
	{
		if (resultCurrency == "BGN")
		{
			result = (moneyToConvert * GBP) / BGN;
		}
		else if (resultCurrency == "USD")
		{
			result = (moneyToConvert * GBP) / USD;
		}
		else
		{
			result = (moneyToConvert * GBP) / EUR;
		}
	}

	printf("%.2f", result);

	return 0;
}