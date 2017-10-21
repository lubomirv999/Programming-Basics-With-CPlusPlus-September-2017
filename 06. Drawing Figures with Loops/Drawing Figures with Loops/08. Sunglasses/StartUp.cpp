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

	cin >> size;

	cout << string(size * 2, '*') << string(size, ' ') << string(size * 2, '*') << endl;

	for (int i = 0; i < size - 2; i++)
	{
		if ((size - 1) / 2 - 1 == i)
		{
			cout << "*" << string((size * 2) - 2, '/') << "*" << string(size, '|') << "*" << string((size * 2) - 2, '/') << "*" << endl;
		}
		else
		{
			cout << "*" << string((size * 2) - 2, '/') << "*" << string(size, ' ') << "*" << string((size * 2) - 2, '/') << "*" << endl;
		}
	}

	cout << string(size * 2, '*') << string(size, ' ') << string(size * 2, '*') << endl;

	return 0;
}