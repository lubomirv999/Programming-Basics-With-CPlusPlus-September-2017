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
	int power = 1;

	cin >> num;

	for (int i = 0; i <= num / 2; i++)
	{
		cout << power << endl;
		power *= 4;
	}

	return 0;
}