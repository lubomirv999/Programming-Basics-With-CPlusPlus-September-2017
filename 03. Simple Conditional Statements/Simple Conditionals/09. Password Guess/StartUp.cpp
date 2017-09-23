#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	string correctPassword = "s3cr3t!P@ssw0rd";
	string password;

	cin >> password;

	if (password == correctPassword)
	{
		cout << "Welcome" << endl;;
	}
	else
	{
		cout << "Wrong password!" << endl;
	}

	return 0;
}