#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	cout << "Enter a even number:" << endl;
	int n = 0;

	while (true)
	{
		try
		{
			cin >> n;

			if (n % 2 == 0)
			{
				break;
			}

			cout << "Invalid Number!" << endl;
		}
		catch (const std::exception&)
		{
			cout << "Invalid Number!" << endl;
		}
	}

	cout << "Even Number Entered: " << n << endl;

	return 0;
}