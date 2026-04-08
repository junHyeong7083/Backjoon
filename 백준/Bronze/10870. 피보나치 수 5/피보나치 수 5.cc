#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#pragma warning(disable : 4996)

int F(int num)
{
	if (num > 1)
		return F(num - 1) + F(num - 2);
	else
		return num;
}

int main()
{
	int n;
	scanf("%d", &n);

	printf("%d", F(n));




	return 0;
}