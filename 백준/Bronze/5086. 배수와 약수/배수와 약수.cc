#include<stdio.h>
#include<iostream>
using namespace std;


int main()
{
	while (true)
	{
		int a, b ;
		cin >> a >> b;
		if (a == 0 && b == 0)
		{
			break;
		}
		if (a > b)
		{
			if (a % b != 0)
				cout << "neither" << endl;
			else if (a % b == 0)
				cout << "multiple" << endl;
		}
		else
		{
			if (b % a != 0)
				cout << "neither" << endl;
			else if (b % a == 0)
				cout << "factor" << endl;
		}

	}


	return 0;
}