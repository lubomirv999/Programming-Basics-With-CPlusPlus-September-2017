#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	double widthOfCake, lengthOfCake;
	string input;

	cin >> widthOfCake >> lengthOfCake;

	cin >> input;

	double cakeSize = widthOfCake * lengthOfCake;
	bool noneCake = false;

	while (input != "STOP")
	{
		double currentPieces = stoi(input);

		if (currentPieces > cakeSize)
		{
			double diff = currentPieces - cakeSize;
			cout << "No more cake left! You need " << diff << " pieces more.";
			noneCake = true;
			break;
		}
		else
		{
			cakeSize -= currentPieces;
		}

		cin >> input;
	}

	if (!noneCake)
	{
		cout << cakeSize << " pieces are left." << endl;
	}	

	return 0;
}