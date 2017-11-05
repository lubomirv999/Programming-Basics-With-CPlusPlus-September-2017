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
	int num;

	cin >> num;

	int firstTwoNumbersSum = 0;
	int secondTwoNumbersSum = 0;

	int firstDigit = 0;
	int secondDigit = 0;
	int thirdDigit = 0;
	int forthDigit = 0;

	int currentNum = 0;
	int currentNumberNotChanged = 0;
	int luckyNumber = 0;

	for (int i = 1111; i <= 9999; i++)
	{
		currentNumberNotChanged = i;
		currentNum = i;

		firstDigit = currentNum % 10;
		currentNum /= 10;

		secondDigit = currentNum % 10;
		currentNum /= 10;

		thirdDigit = currentNum % 10;
		currentNum /= 10;

		forthDigit = currentNum % 10;

		firstTwoNumbersSum = firstDigit + secondDigit;
		secondTwoNumbersSum = thirdDigit + forthDigit;

		if ((firstTwoNumbersSum == secondTwoNumbersSum) &&
			firstDigit > 0 && firstDigit <= 9 && secondDigit > 0 && secondDigit <= 9
			&& thirdDigit > 0 && thirdDigit <= 9 && forthDigit > 0 && forthDigit <= 9)
		{
			if (num <= 17)
			{
				if (firstTwoNumbersSum % num == 0 && firstTwoNumbersSum == num)
				{
					luckyNumber = i;

					cout << luckyNumber << ' ';
				}
			}
			else if (num > 17)
			{
				if (num % firstTwoNumbersSum == 0)
				{
					luckyNumber = i;

					cout << luckyNumber << ' ';
				}
			}
		}
	}

	return 0;
}