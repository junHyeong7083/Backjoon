#include<stdio.h>
#include<iostream>
#pragma warning(disable : 4996)
using namespace std;

int main()
{
	int n;
	cin >> n;
	int An[50] = { 0 };
	int Bn[50] = { 0 };

	for (int i = 0; i < n; ++i)
	{
		cin >> An[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> Bn[i];
	}
	int temp = 0;
	for (int i = 0; i < n-1; ++i)
	{
		for (int j =0; j < n-1-i; ++j)
		{
			if (An[j] < An[j + 1])
			{
				temp = An[j];
				An[j] = An[j + 1];
				An[j + 1] = temp;
			}
		}

		for (int k = 0; k < n - 1 - i; ++k)
		{
			if (Bn[k] > Bn[k + 1])
			{
				temp = Bn[k];
				Bn[k] = Bn[k + 1];
				Bn[k + 1] = temp;
			}
		}
	}

	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += An[i] * Bn[i];
	}

	cout << sum;

	return 0;
}