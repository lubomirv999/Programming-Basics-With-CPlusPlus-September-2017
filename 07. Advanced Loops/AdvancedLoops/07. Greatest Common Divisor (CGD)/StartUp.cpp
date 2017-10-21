#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	int a, b;

	cin >> a >> b;

	while (b != 0)
	{
		double temp = b;
		b = a % b;
		a = temp;
	}

	cout << a << endl;

	return 0;
}