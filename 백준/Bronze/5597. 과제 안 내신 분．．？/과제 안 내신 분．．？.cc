#include<stdio.h>
#include<iostream>
#pragma warning(disable : 4996)
using namespace std;

int main()
{
	int arr[31] = { 0 };
	int input;
	for (int i = 0; i < 28; ++i)
	{
		cin >> input;
		arr[input] = input;
	}
	
	for (int i = 1; i <= 30; ++i)
	{
		if (arr[i] == 0)
		{
			cout << i<< endl;
		}
	}


	return 0;
}