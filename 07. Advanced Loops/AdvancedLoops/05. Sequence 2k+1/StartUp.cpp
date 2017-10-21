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
	int num = 1;

	cin >> n;

	while (num <= n)
	{
		cout << num << endl;
		num = 2 * num + 1;
	}

	return 0;
}