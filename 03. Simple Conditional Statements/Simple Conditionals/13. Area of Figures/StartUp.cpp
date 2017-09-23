#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

#define M_PI (3.14159265358979323846)

using namespace std;

int main()
{
	double squareSide, rectangleSideA, rectangleSideB, circleRadius, triangleSide, triangleHeight;
	string figure;

	cin >> figure;

	if (figure == "square")
	{
		cin >> squareSide;
		double area = squareSide * squareSide;
		printf("%.3f", area);
	}
	else if (figure == "rectangle")
	{
		cin >> rectangleSideA >> rectangleSideB;
		double area = rectangleSideA * rectangleSideB;
		printf("%.3f", area);
	}
	else if (figure == "circle")
	{
		cin >> circleRadius;
		double area = M_PI * circleRadius * circleRadius;
		printf("%.3f", area);
	}
	else
	{
		cin >> triangleSide >> triangleHeight;
		double area = (triangleSide * triangleHeight) / 2;
		printf("%.3f", area);
	}

	return 0;
}