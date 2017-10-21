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
	int f0 = 1;
	int f1 = 1;

	cin >> n;

	for (int i = 1; i <= n-1; i++)
	{
		int sum = f0 + f1;
		f0 = f1;
		f1 = sum;
	}

	cout << f1 << endl;

	return 0;
}