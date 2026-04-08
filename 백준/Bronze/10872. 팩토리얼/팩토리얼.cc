#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)


int main()
{
	int n, a = 1;
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i)
	{
		a *= i;
	}
	printf("%d", a);
	return 0;
}
