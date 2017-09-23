#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	int holidays, weekendsHome;
	string year;

	cin >> year >> holidays >> weekendsHome;

	int sofiaWeekends = 48 - weekendsHome;
	double playSofia = (3.0 * sofiaWeekends / 4) + (2.0 * holidays / 3);
	double playTotal = playSofia + weekendsHome;

	if (year == "leap")
	{
		playTotal = floor(playTotal * 15 / 100 + playTotal);
		cout << playTotal << endl;
	}
	else if (year == "normal")
	{
		cout << floor(playTotal) << endl;;
	}

	return 0;
}