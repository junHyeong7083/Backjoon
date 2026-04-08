#include<stdio.h>
#pragma warning(disable : 4996)

int main()
{
	int a, b;
	
	scanf("%d %d", &a, &b);
	while(a)
	{
		printf("%d\n", a + b);
		scanf("%d %d", &a, &b);
	}

	return 0;
}

