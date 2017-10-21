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

	int mid = -1;

	cin >> size;

	if (size % 2 == 0)
	{
		mid = 0;
	}

	for (int i = 1; i <= (size + 1) / 2; i++)
	{
		int left = (size - 2 - mid) / 2;
		cout << string(left, '-') << '*';

		if (mid >= 0)
		{
			cout << string(mid, '-') << '*';
		}

		cout << string(left, '-') << endl;

		mid += 2;
	}

	mid = size - 4;

	for (int i = 1; i < (size + 1) / 2; i++)
	{
		int left = (size - 2 - mid) / 2;

		cout << string(left, '-') << '*';

		if (mid >= 0)
		{
			cout << string(mid, '-') << '*';
		}

		cout << string(left, '-') << endl;

		mid -= 2;
	}

	return 0;
}