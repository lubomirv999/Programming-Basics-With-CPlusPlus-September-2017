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

	cout << string(size, '*') << endl;

	for (int i = 0; i < size - 2; i++)
	{
		cout << '*' << string(size - 2, ' ') << '*' << endl;
	}

	cout << string(size, '*') << endl;

	return 0;
}