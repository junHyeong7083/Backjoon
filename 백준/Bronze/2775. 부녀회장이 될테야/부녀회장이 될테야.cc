#include <stdio.h>
#include<iostream>
#include<string>
#pragma warning(disable : 4996)
using namespace std;

int main()
{
	int T,k,n,sum = 0;
	cin >> T;

	int arr[15][15] = { 0 };
	for (int m = 0; m < 15; ++m)
		arr[0][m] = m;
	for (int b = 0; b < 15; ++b)
		arr[b][1] = 1;
	while (T--)
	{
		cin >> k; // 층수 입력
		cin >> n; // 호수 입력

		for (int i = 1; i <= k; ++i)
		{
			for (int j = 1; j <= n; ++j)
			{
				arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
			}
		}
		
		printf("%d\n", arr[k][n]);
	}

		
	return 0;
}