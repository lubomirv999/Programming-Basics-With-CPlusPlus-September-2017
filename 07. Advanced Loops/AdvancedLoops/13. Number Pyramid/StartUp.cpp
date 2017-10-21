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

	for (int row = 1; row <= n; row++)
	{
		for (int col = 1; col <= row; col++)
		{
			if (col > 1)
			{
				cout << " ";
			}

			cout << num;
			num++;

			if (num > n)
			{
				cout << endl;
				return 0;
			}
		}

		cout << endl;
	}

	return 0;
}