#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	string firstName, lastName, town;
	int age;

	cin >> firstName;
	cin >> lastName;
	cin >> age;
	cin >> town;

	cout << "You are " << firstName + " " << lastName << ", a " << age << "-years old person from " << town << "." << endl;

	return 0;
}