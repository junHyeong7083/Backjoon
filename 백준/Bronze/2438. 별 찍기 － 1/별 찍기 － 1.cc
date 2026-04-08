#include<stdio.h>
#pragma warning(disable : 4996)

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i)
	{
		for (int k = 1; k <= i; ++k)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}