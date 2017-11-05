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
	double numOfStudents;

	cin >> numOfStudents;

	double dvoikaPoints = 0;
	double troikaPoints = 0;
	double chetvorkaPoints = 0;
	double peticaPoints = 0;
	double shesticaPoints = 0;

	for (int i = 0; i < numOfStudents; i++)
	{
		double currentPoints;

		cin >> currentPoints;

		if (currentPoints >= 0 && currentPoints <= 22.5)
		{
			dvoikaPoints++;
		}
		else if (currentPoints > 22.5 && currentPoints <= 40.5)
		{
			troikaPoints++;
		}
		else if (currentPoints > 40.5 && currentPoints <= 58.5)
		{
			chetvorkaPoints++;
		}
		else if (currentPoints > 58.5 && currentPoints <= 76.5)
		{
			peticaPoints++;
		}
		else if (currentPoints > 76.5 && currentPoints <= 100)
		{
			shesticaPoints++;
		}
	}

	double dvoikaPercentage = dvoikaPoints / numOfStudents * 100;
	double troikaPercentage = troikaPoints / numOfStudents * 100;
	double chetvorkaPercentage = chetvorkaPoints / numOfStudents * 100;
	double peticaPercentage = peticaPoints / numOfStudents * 100;
	double shesticaPercentage = shesticaPoints / numOfStudents * 100;

	cout << fixed << setprecision(2) << dvoikaPercentage << "% poor marks" << endl;
	cout << fixed << setprecision(2) << troikaPercentage << "% satisfactory marks" << endl;
	cout << fixed << setprecision(2) << chetvorkaPercentage << "% good marks" << endl;
	cout << fixed << setprecision(2) << peticaPercentage << "% very good marks" << endl;
	cout << fixed << setprecision(2) << shesticaPercentage << "% excellent marks" << endl;

	return 0;
}