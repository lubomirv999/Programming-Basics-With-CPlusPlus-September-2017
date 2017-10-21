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
	int power = 2;

	cin >> num;

	cout << 1 << endl;

	for (int i = 0; i < num; i++)
	{
		cout << power << endl;
		power *= 2;
	}

	return 0;
}