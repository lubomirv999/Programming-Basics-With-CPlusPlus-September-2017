#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	double firstNum, secondNum;

	cin >> firstNum >> secondNum;

	if (firstNum > secondNum)
	{
		cout << firstNum << endl;
	}
	else if (firstNum < secondNum)
	{
		cout << secondNum << endl;
	}
	else 
	{
		cout << firstNum << endl;
	}

	return 0;
}