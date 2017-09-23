#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	double firstNum, secondNum, thirdNum;

	cin >> firstNum >> secondNum >> thirdNum;

	if (firstNum == secondNum && secondNum == thirdNum)
	{
		cout << "yes" << endl;
	}
	else 
	{
		cout << "no" << endl;
	}

	return 0;
}