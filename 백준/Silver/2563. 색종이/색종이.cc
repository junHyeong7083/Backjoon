#include <stdio.h>
#include <string.h>
#include<iostream>

using namespace std;
int arr[101][101];
int main() 
{
	int n, x, y;
	cin >> n;
	int cnt = 0;
	while (n != 0)
	{
		cin >> x >> y;

		for (int i = y; i < y + 10; ++i)
		{
			for (int j = x; j < x + 10; j++)
			{
				if (!arr[i][j])
				{
					cnt++;
					arr[i][j] = 1;
				}

			}
		}
		n--;
	}
	cout << cnt;


	return 0;
}