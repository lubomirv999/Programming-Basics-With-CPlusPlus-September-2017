#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	double firstBrotherTime, secondBrotherTime, thirdBrotherTime, fathersFishingTime;

	cin >> firstBrotherTime >> secondBrotherTime >> thirdBrotherTime >> fathersFishingTime;

	double totalTimeBrothers = 1 / (1 / firstBrotherTime + 1 / secondBrotherTime + 1 / thirdBrotherTime);
	double totalTimeWithRest = totalTimeBrothers + (totalTimeBrothers * 0.15);
	double totalTime = fathersFishingTime - totalTimeWithRest;

	cout << "Cleaning time: " << fixed << setprecision(2) << totalTimeWithRest << endl;

	if (totalTime > 0)
	{
		cout << "Yes, there is a surprise - time left -> " << fixed << setprecision(0) << floor(totalTime) << " hours." << endl;
	}
	else if (totalTime < 0)
	{
		cout << "No, there isn't a surprise - shortage of time -> " << fixed << setprecision(0) << abs(floor(totalTime)) << " hours." << endl;
	}

	return 0;
}