#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int arr[10][10] = { 0 };
int main()
{	
	// 9 9 행렬에서 최대값과 그 n,m값도가져오기
	int maxValue = 0;
	int maxI, maxJ = 0;
	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 9; ++j)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 9; ++j)
		{
			if (maxValue <= arr[i][j])
			{
				maxValue = arr[i][j];
				maxI = i+1;
				maxJ = j+1;
			}
		}
	}
	cout << maxValue << endl << maxI << ' ' << maxJ;



	return 0;
}