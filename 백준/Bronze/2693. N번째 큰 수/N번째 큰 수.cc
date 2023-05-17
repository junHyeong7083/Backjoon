#include<stdio.h>
#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int arr[10];
		for (int i = 0; i < 10; ++i)
		{
			cin >> arr[i];
		}
		int tmp = 0;
		for (int k = 0; k < 10; k++)
		{
			for (int x = 0; x < 9; x++)
			{
				if (arr[x] < arr[x + 1])
				{
					tmp = arr[x];
					arr[x] = arr[x + 1];
					arr[x + 1] = tmp;
				}
			}
		}
		
		cout << arr[2] << endl;
	}

	return 0;
}