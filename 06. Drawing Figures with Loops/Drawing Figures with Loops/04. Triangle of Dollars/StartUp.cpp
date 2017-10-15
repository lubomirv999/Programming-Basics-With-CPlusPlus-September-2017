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

	for (int i = 1; i <= n; i++)
	{
		cout << '$';
		for (int j = 1; j < i; j++)
		{
			cout << " $";
		}
		cout << endl;
	}

	return 0;
}