#include <iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#pragma warning(disable : 4996)
using namespace std;

int arr[100001];

void Search(int n, int tmp)
{
	int start = 0;
	int end = n - 1;
	int mid;

	while (end-start >= 0)
	{
		mid = (start + end) / 2;
		if (arr[mid] == tmp)
		{
			printf("1\n");
			return;
		}
		else if (arr[mid] > tmp)
		{
			end = mid - 1;
		}
		else
			start = mid + 1;

	}
	printf("0\n");
	return;
}


int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &arr[i]);
	}
	sort(arr, arr + n);

	int m, tmp;
	scanf("%d", &m);;
	for (int i = 0; i < m; ++i)
	{
		scanf("%d", &tmp);
		Search(n, tmp);
	}
	return 0;
}
