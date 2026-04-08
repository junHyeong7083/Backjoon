#include<stdio.h>
#pragma warning(disable : 4996)


int main()
{
	int a, b = 0; // a = 입력 b = 합
	scanf("%d", &a);
	for (int i = 0; i <= a; ++i)
	{
		b += i;
	}
	printf("%d", b);

	return 0;

}