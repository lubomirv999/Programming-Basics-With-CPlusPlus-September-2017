#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	string word;

	getline(cin, word);

	int sum = 0;
	for (int i = 0; i < word.size(); i++)
	{
		int currentLetter = word[i];
		if (currentLetter == 'a')
		{
			sum += 1;
		}
		if (currentLetter == 'e')
		{
			sum += 2;
		}
		if (currentLetter == 'i')
		{
			sum += 3;
		}
		if (currentLetter == 'o')
		{
			sum += 4;
		}
		if (currentLetter == 'u')
		{
			sum += 5;
		}
	}

	cout << sum << endl;

	return 0;
}