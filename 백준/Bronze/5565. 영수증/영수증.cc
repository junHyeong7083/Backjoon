#include <stdio.h>
#include<iostream>
#include<string>
#pragma warning(disable : 4996)
using namespace std;
int main()
{
	int Total, Input;
	cin >> Total;
	
	for (int i = 0; i < 9; ++i)
	{
		cin >> Input;
		Total = Total - Input;
	}
	cout << Total;

	return 0;
}