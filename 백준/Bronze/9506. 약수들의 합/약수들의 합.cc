#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;


int main()
{
	int arr[10000] = { 0 };
	while (true)
	{
		int a;
		cin >> a;


		if (a == -1)
		{
			break;
		}
		int uparr = 0;
		int sum = 0;
		for (int i = 1; i < a; ++i)
		{
			if (a % i == 0)
			{
				arr[uparr] = i;
				sum += i;
				uparr++;
			}
		}
		if (a != sum)
		{
			cout << a << " is NOT perfect."<<endl;
		}
		else if(a == sum)
		{
			cout << a << " = ";
			for (int i = 0; i < uparr - 1; i++)
			{

				cout << arr[i] << " + ";
			}
			cout << arr[uparr-1] << '\n';
		}

	}


	return 0;
}