#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)

int main()
{
	int N;
	scanf("%d", &N);
	while (N--)
	{
		for (int i = 0; i <= N; ++i)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}