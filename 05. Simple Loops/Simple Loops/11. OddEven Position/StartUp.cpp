#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	int nums;
	double oddMax = INT32_MIN;
	double oddMin = INT32_MAX;
	double evenMax = INT32_MIN;
	double evenMin = INT32_MAX;
	double evenSum = 0;
	double oddSum = 0;

	cin >> nums;

	double arr[] = new double[nums];

	if (nums == 0)
	{
		cout << "OddSum=0," << endl;
		cout << "OddMin = No," << endl;
		cout << "OddMax = No, " << endl;
		cout << "EvenSum=0," << endl;
		cout << "EvenMin=No," << endl;
		cout << "EvenMax=No" << endl;
	}
	else if (nums == 1)
	{
		for (int i = 0; i < n; i++)
		{
			arr[i] = double.Parse(Console.ReadLine());
		}

		cout << "OddSum={0},", arr[0]);
		cout << "OddMin = {0},", arr[0]);
		cout << "OddMax = {0}, ", arr[0]);
		cout << "EvenSum=0,");
		cout << "EvenMin=No,");
		cout << "EvenMax=No");
	}
	else if (n == 2)
	{
		for (int i = 0; i < arr.Length; i++)
		{
			arr[i] = double.Parse(Console.ReadLine());
		}
		Console.WriteLine("OddSum={0},", arr[0]);
		Console.WriteLine("OddMin = {0},", arr[0]);
		Console.WriteLine("OddMax = {0}, ", arr[0]);
		Console.WriteLine("EvenSum={0},", arr[1]);
		Console.WriteLine("EvenMin={0},", arr[1]);
		Console.WriteLine("EvenMax={0}", arr[1]);
	}
	else
	{
		for (int i = 0; i < arr.Length; i++)
		{
			arr[i] = double.Parse(Console.ReadLine());
			if (i % 2 == 0)
			{
				oddSum += arr[i];
				if (arr[i] > oddMax)
				{
					oddMax = arr[i];
				}
				if (arr[i] < oddMin)
				{
					oddMin = arr[i];
				}
			}
			else
			{
				evenSum += arr[i];
				if (arr[i] > evenMax)
				{
					evenMax = arr[i];
				}
				if (arr[i] < evenMin)
				{
					evenMin = arr[i];
				}
			}
		}
		Console.WriteLine("OddSum = {0},", oddSum);
		Console.WriteLine("OddMin = {0},", oddMin);
		Console.WriteLine("OddMax = {0}, ", oddMax);
		Console.WriteLine("EvenSum={0},", evenSum);
		Console.WriteLine("EvenMin={0},", evenMin);
		Console.WriteLine("EvenMax={0}", evenMax);

		return 0;
	}