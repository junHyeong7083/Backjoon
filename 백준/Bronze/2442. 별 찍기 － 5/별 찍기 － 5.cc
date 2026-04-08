#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#pragma warning(disable : 4996)


int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i)
	{
		for (int j = n-i; j > 0; --j)
		{
			printf(" ");
		}
		for (int k = 0; k < 2*i-1; ++k)
		{
			printf("*");
		}
		printf("\n");
	}


	return 0;
}