#include<stdio.h>
#pragma warning(disable: 4996)

int main()
{
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);

	if (a > b)
	{
		printf(">");
	}
	else if (a < b)
	{
		printf("<");
	}
	else
	{
		printf("==");
	}




	return 0;
}