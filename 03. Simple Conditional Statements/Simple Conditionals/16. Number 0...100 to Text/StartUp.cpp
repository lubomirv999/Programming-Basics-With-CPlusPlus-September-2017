#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	int n, firstNumber, secondNumber, bothNumbers;

	cin >> n;

	firstNumber = n / 10;
	secondNumber = 0;
	bothNumbers = n;
	
	if (n >= 0 && n <= 10)
	{
		secondNumber = n;
	}
	else if (n >= 20)
	{
		secondNumber = n % 10;
	}

	string firstWord = "";
	string secondWord = "";
	string bothWords = "";

	switch (firstNumber)
	{
	case 2:
		firstWord = "twenty";
		break;
	case 3:
		firstWord = "thirty";
		break;
	case 4:
		firstWord = "forty";
		break;
	case 5:
		firstWord = "fifty";
		break;
	case 6:
		firstWord = "sixty";
		break;
	case 7:
		firstWord = "seventy";
		break;
	case 8:
		firstWord = "eighty";
		break;
	case 9:
		firstWord = "ninety";
		break;
	case 10:
		firstWord = "one hundred";
		break;
	default:
		break;
	}

	switch (secondNumber)
	{
	case 0:
		secondWord = "zero";
		break;
	case 1:
		secondWord = "one";
		break;
	case 2:
		secondWord = "two";
		break;
	case 3:
		secondWord = "three";
		break;
	case 4:
		secondWord = "four";
		break;
	case 5:
		secondWord = "five";
		break;
	case 6:
		secondWord = "six";
		break;
	case 7:
		secondWord = "seven";
		break;
	case 8:
		secondWord = "eight";
		break;
	case 9:
		secondWord = "nine";
		break;
	default:
		break;
	}

	switch (bothNumbers)
	{
	case 10:
		bothWords = "ten";
		break;
	case 11:
		bothWords = "eleven";
		break;
	case 12:
		bothWords = "twelve";
		break;
	case 13:
		bothWords = "thirteen";
		break;
	case 14:
		bothWords = "fourteen";
		break;
	case 15:
		bothWords = "fifteen";
		break;
	case 16:
		bothWords = "sixteen";
		break;
	case 17:
		bothWords = "seventeen";
		break;
	case 18:
		bothWords = "eighteen";
		break;
	case 19:
		bothWords = "nineteen";
		break;
	default:
		break;
	}

	if (n % 10 == 0 && n != 0)
	{
		secondWord = "";
	}

	if (n >= 0 && n < 10)
	{
		cout << secondWord << endl;
	}

	else if (n >= 10 && n <= 19)
	{
		cout << bothWords << endl;
	}
	else if (n >= 20 && n <= 100)
	{
		if (n % 10 == 0)
		{
			cout << firstWord << endl;
		}
		else
		{
			cout << firstWord << " " << secondWord;
		}

	}
	else
	{
		cout << "invalid number" << endl;
	}

	return 0;
}