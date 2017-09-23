#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	int num;

	cin >> num;

	if (num < 100)
	{
		cout << "Less than 100" << endl;
	}
	else if (num >= 100 && num <= 200)
	{
		cout << "Between 100 and 200" << endl;
	}
	else 
	{
		cout << "Greater than 200" << endl;
	}

	return 0;
}