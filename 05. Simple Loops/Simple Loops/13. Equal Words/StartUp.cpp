#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>
#include <stdio.h>
#include <ctype.h>
#include <algorithm>

using namespace std;

int main()
{
	string firstWord, secondWord;

	cin >> firstWord >> secondWord;

	transform(firstWord.begin(), firstWord.end(), firstWord.begin(), ::tolower);
	transform(secondWord.begin(), secondWord.end(), secondWord.begin(), ::tolower);

	if (firstWord == secondWord)
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}

	return 0;
}