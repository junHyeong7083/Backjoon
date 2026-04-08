#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)

int main()
{
	int n;
	scanf("%d", &n);
	for(int k = 0; k < n; ++k)
	{
		for (int j = 0; j < k ; ++j)
		{
			printf(" ");
		}

		for (int i = n-k; i > 0; --i)
		{
			printf("*");
		}
		printf("\n");

	}
	return 0;
}