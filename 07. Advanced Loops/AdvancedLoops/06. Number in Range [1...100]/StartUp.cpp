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

	cout << "Enter a number in the range [1...100]: ";
	cin >> num;

	while (num < 1 || num > 100)
	{
		cout << "Invalid number!" << endl;
		cin >> num;
	}

	cout << "The number is: " << num << endl;

	return 0;
}