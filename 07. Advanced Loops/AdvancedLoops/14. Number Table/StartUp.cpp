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

	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < n; col++)
		{
			int num = row + col + 1;

			if (num > n)
			{
				num = (2 * n) - num;
			}

			cout << num << " ";
		}

		cout << endl;
	}

	return 0;
}