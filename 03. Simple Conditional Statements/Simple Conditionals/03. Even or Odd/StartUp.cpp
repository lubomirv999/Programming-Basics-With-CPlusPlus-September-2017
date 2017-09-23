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

	if (num % 2 == 0)
	{
		cout << "even" << endl;
	}
	else
	{
		cout << "odd" << endl;
	}

	return 0;
}