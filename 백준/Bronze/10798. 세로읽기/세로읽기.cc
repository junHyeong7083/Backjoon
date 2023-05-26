#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	string a[5];
	for (int i = 0; i < 5; ++i)
		cin >> a[i];

	for (int i = 0; i < 15; ++i)
	{
		for (int k = 0; k < 5; ++k)
		{
			if (i < a[k].size())
				cout << a[k][i];
		}
	}



	return 0;
}