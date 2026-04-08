#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#pragma warning(disable : 4996)


int main()
{
	int n;
	scanf("%d", &n);
	for (int i = n; i > 0; --i)
	{
		for (int j = n-i; j > 0; --j)
		{
			printf(" ");
		}
		for (int k = 2 * i - 1; k >= 1; --k)
		{
			printf("*");
		}
		
		printf("\n");
	}


	return 0;
}