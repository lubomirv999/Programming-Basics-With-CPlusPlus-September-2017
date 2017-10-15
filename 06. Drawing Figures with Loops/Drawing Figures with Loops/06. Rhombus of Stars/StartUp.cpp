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
	int stars = 1;
	int spaces = n - 1;

	// Draw Top Part
	for (int row = 0; row < n; row++)
	{
		for (int i = 0; i < spaces; i++)
		{
			cout << " ";
		}

		cout << "*";

		for (int i = 0; i < stars - 1; i++)
		{
			cout << " *";
		}

		cout << endl;

		stars++;
		spaces--;
	}

	// Draw Down Part
	spaces = 1;
	stars = n - 1;

	for (int row = 0; row < n - 1; row++)
	{
		for (int i = 0; i < spaces; i++)
		{
			cout << " ";
		}

		cout << "*";

		for (int i = 0; i < stars - 1; i++)
		{
			cout << " *";
		}

		cout << endl;

		stars--;
		spaces++;
	}
}