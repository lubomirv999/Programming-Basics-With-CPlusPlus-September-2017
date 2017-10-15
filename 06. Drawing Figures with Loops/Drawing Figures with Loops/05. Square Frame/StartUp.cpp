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
		if (row == 0 || row == n - 1)
		{
			cout << "+";
		}
		else
		{
			cout << "|";
		}

		for (int col = 0; col < n - 2; col++)
		{
			cout << " -";
		}

		if (n > 1)
		{
			if (row == 0 || row == n - 1)
			{
				cout << " +";
			}
			else
			{
				cout << " |";
			}
		}

		cout << endl;
	}

	return 0;
}