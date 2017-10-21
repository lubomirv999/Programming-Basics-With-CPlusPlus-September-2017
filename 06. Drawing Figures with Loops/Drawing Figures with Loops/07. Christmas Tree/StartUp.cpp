#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	int size;
	int stars = 0;

	cin >> size;

	for (int i = 0; i <= size; i++)
	{
		for (int j = 0; j < size - i; j++)
		{
			cout << " ";
		}

		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}

		cout << " | ";

		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}

		cout << endl;
	}

	return 0;
}