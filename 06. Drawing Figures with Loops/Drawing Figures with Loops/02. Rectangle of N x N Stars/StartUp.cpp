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

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << string(n, '*') << endl;
	}

	return 0;
}