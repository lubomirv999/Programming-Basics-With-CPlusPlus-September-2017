#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	double age;
	char gender;

	cin >> age >> gender;

	if (age >= 16 && gender == 'm')
	{
		cout << "Mr." << endl;
	}
	else if (age < 16 && gender == 'm')
	{
		cout << "Master" << endl;
	}
	else if (age >= 16 && gender == 'f')
	{
		cout << "Ms." << endl;
	}
	else
	{
		cout << "Miss" << endl;
	}

	return 0;
}