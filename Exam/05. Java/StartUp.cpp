#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>
#include <climits>

using namespace std;

int main()
{
	int num;

	cin >> num;

	double width = 3 * num + 6;
	double height = 3 * num + 1;

	double spaces = num;

	for (int i = 0; i < num; i++)
	{
		cout << string(spaces, ' ') << "~ ~ ~" << endl;
	}

	cout << string(width - 1, '=') << endl;

	// Top Part

	double strangeSign = num;
	double strangeSignInner = width - num - 2;
	for (int i = 0; i < num - 2; i++)
	{
		if (num == 3)
		{
			cout << '|' << string(strangeSign, '~') << "JAVA" << string(strangeSign, '~') << '|' << string(spaces - 1, ' ') << '|' << endl;
		}
		else if (i == floor(num / 2 - 1))
		{
			cout << '|' << string(strangeSign, '~') << "JAVA" << string(strangeSign, '~') << '|' << string(spaces - 1, ' ') << '|' << endl;
		}
		else
		{
			cout << '|' << string(strangeSignInner, '~') << '|' << string(spaces - 1, ' ') << '|' << endl;
		}
	}

	// Bottom Part
	cout << string(width - 1, '=') << endl;

	spaces = 0;
	double klyomba = width - 2 - num;
	double outerspace = num;

	for (int i = 0; i < num; i++)
	{
		cout << string(spaces, ' ') << '\\' << string(klyomba, '@') << '/' << endl;
		spaces++;
		klyomba -= 2;

		if (i == num - 1)
		{
			cout << string(width - num, '=') << endl;
		}
	}

	return 0;
}