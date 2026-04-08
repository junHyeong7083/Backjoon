#include <stdio.h>
#include<iostream>
#include<string>
#pragma warning(disable : 4996)
using namespace std;

int arr[5];
int main()
{
	int a, b, c, d, max = 0,cnt = 0;

	for (int i = 0; i < 5; ++i)
	{
		cin >> a >> b >> c >> d;
		arr[i] = a + b + c + d;
		if (max < arr[i])
		{
			cnt = i + 1;
			max = arr[i];
		}
	}

	printf("%d %d", cnt, max);

	return 0;
}