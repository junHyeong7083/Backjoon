#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

int main()
{

	int n;
	cin >> n;
	int m;
	cin >> m;


	int arr[100];
	for (int i = 1; i <= n; ++i)
	{
		arr[i] = i;
	}

	while (m--)
	{
		int i, j;
		cin >> i>> j;
		for (int k = 0; k <= (j - i) /2 ; ++k)
		{
			swap(arr[i + k], arr[j - k]);
		}
	}

	for (int i = 1; i <= n; ++i)
	{
		cout << arr[i] << " ";
	}


	return 0;
}