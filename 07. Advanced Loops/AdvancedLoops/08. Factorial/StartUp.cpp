#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	int n;
	int fact = 1;

	cin >> n;

	while (n >=1 && n <= 12)
	{
		fact = fact * n;
		n--;
	}

	cout << fact<< endl;

	return 0;
}