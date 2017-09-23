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

	if (!(num >= 100 && num <= 200 || num == 0))
	{
		cout << "invalid" << endl;
	}

	return 0;
}