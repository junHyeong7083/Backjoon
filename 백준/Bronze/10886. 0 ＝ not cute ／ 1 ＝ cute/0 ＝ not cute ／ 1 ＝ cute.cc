#include <stdio.h>
#include<iostream>
#include<string>
#pragma warning(disable : 4996)
using namespace std;

int main()
{
	int n, a, sum1 = 0, sum2 = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &a);
		if (a == 1)
			sum1++;
		else
			sum2++;
	}
	if (sum1 > sum2)
		printf("Junhee is cute!");
	else
		printf("Junhee is not cute!");
	return 0;
}