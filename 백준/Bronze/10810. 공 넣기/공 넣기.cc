#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{	
	// n바구니의 개수
	// 1~ n번의 번호
	// 가장 처음 바구니에 공 x
	// 각각의 바구니에는 공이 1개
	// m바구니에 넣을 횟수
	int n, m;
	cin >> n >> m;
	int arr[101] = { 0 };
	while (m--)
	{
		int i, j, k;
		cin >> i >> j >> k;
		for (int a = i; a <= j; a++)
		{
			arr[a] = k;
		}

	}
	for (int i = 1; i <= n; ++i)
	{
		cout << arr[i] << ' ';
	}
	return 0;
}