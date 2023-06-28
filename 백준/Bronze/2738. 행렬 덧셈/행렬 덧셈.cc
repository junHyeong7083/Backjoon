#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{	
	// n*m 의 행렬
	// 2개를 더함
	int arr1[101][101] = { 0 };
	int arr2[101][101] = { 0 };

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < 2; ++i)
	{
		if (i == 0)
		{
			for (int j = 0; j < n; ++j)
			{
				for (int k = 0; k < m; ++k)
				{
					cin >> arr1[j][k];
					//cout << arr1[j][k] << ' ';
				}
			//	cout << endl;
			}
		}
		if (i == 1)
		{
			for (int b = 0; b < n; ++b)
			{
				for (int c = 0; c < m; ++c)
				{
					cin >> arr2[b][c];
					//cout << arr2[b][c] << ' ';
				}
				//cout << endl;
			}
		}
	}


	for (int j = 0; j < n; ++j)
	{
		for (int k = 0; k < m; ++k)
		{
			cout << arr1[j][k] + arr2[j][k] << ' ';
		}
		cout << endl;
	}
	return 0;
}