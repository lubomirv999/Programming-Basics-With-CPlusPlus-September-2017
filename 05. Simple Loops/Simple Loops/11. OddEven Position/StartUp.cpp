#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	int number;
	double inputNum;

	double oddSum = 0;
	double evenSum = 0;

	double maxOdd = INT_MIN;
	double minOdd = INT_MAX;

	double neutralOddMax = INT_MIN;
	double neutralOddMin = INT_MAX;

	double minEven = INT_MAX;
	double maxEven = INT_MIN;

	double neutralEvenMax = INT_MIN;
	double neutralEvenMin = INT_MAX;

	cin >> number;

	for (int i = 1; i <= number; i++)
	{
		cin >> inputNum;

		if (i % 2 == 1)
		{
			oddSum += inputNum;

			if (maxOdd < inputNum)
			{
				maxOdd = inputNum;
			}

			if (minOdd > inputNum)
			{
				minOdd = inputNum;
			}

		}
		else
		{
			evenSum += inputNum;

			if (maxEven < inputNum)
			{
				maxEven = inputNum;
			}

			if (minEven > inputNum)
			{
				minEven = inputNum;
			}
		}
	}

	cout << "OddSum=" << oddSum << ", ";

	if (maxOdd == neutralOddMax && minOdd == neutralOddMin)
	{
		cout << "OddMin=No" << ", ";
		cout << "OddMax=No" << ", ";
	}
	else if (maxOdd == neutralOddMax)
	{
		cout << "OddMin=" << minOdd << ", ";
		cout << "OddMax=No" << ", ";
	}
	else if (minOdd == neutralOddMin)
	{
		cout << "OddMin=No" << minOdd << ", ";
		cout << "OddMax=" << maxOdd << ", ";
	}
	else if (maxOdd != neutralOddMax && minOdd != neutralOddMin)
	{
		cout << "OddMin=" << minOdd << ", ";
		cout << "OddMax=" << maxOdd << ", ";
	}



	cout << "EvenSum=" << evenSum << ", ";

	if (maxEven == neutralEvenMax && minEven == neutralEvenMin)
	{
		cout << "EvenMin=No" << ", ";
		cout << "EvenMax=No";
	}
	else if (maxEven == neutralEvenMax)
	{
		cout << "EvenMin=" << minEven << ", ";
		cout << "EvenMax=No";
	}
	else if (minEven == neutralEvenMin)
	{
		cout << "EvenMin=No" << minEven << ", ";
		cout << "EvenMax=" << maxEven;
	}
	else if (maxEven != neutralEvenMax && minEven != neutralEvenMin)
	{
		cout << "EvenMin=" << minEven << ", ";
		cout << "EvenMax=" << maxEven;
	}

	return 0;
}