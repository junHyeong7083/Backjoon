#include <iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
int main() 
{
	int input;
	int sum = 0;
	int min =1000;
	for (int j = 0; j < 7; ++j)
	{
		cin >> input;
		if (input % 2 == 1)
		{
			sum += input;
			if (input <= min)
				min = input;
		}
	}
	if (sum == 0)
		cout << "-1" << endl;
	else
		cout << sum << endl << min;


	return 0;
}