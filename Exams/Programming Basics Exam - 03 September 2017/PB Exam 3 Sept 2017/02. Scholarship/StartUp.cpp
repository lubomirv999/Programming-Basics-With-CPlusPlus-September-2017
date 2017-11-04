#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	double income, averageScore, minSalary;

	cin >> income >> averageScore >> minSalary;

	double exellentScholarship = 0;
	double socialScholarship = minSalary * 0.35;

	if (averageScore >= 5.5 && income > minSalary)
	{
		exellentScholarship = averageScore * 25;

		cout << "You get a scholarship for excellent results " << floor(exellentScholarship) << " BGN" << endl;
	}
	else if (averageScore >= 5.5 && income <= minSalary)
	{
		exellentScholarship = averageScore * 25;
		if (exellentScholarship > socialScholarship)
		{
			cout << "You get a scholarship for excellent results " << floor(exellentScholarship) << " BGN" << endl;
		}
		else if (exellentScholarship < socialScholarship)
		{
			cout << "You get a Social scholarship " << floor(socialScholarship) << " BGN" << endl;
		}
	}
	else if (averageScore >= 4.5 && minSalary > income)
	{
		cout << "You get a Social scholarship " << floor(socialScholarship) << " BGN" << endl;
	}
	else
	{
		cout << "You cannot get a scholarship!" << endl;
	}

	return 0;
}