#include <stdio.h>
#include<iostream>
#include<string>
#pragma warning(disable : 4996)
using namespace std;



int main()
{
	int n,cnt = 0;
	scanf("%d", &n);
	int arr[101] = { 0 };
	int Num;
	while (n--)
	{
		scanf("%d", &Num);
		if (arr[Num] == 1)
			cnt++;
		arr[Num] = 1;
		
	}		
	printf("%d", cnt);

	return 0;
}