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

	for (int i = 1; i <= num; i += 3)
	{
		cout << i << endl;
	}

	return 0;
}