#include<stdio.h>
#pragma warning(disable : 4996)

int main()
{
	int a, b, c;
	scanf("%d%d", &a, &b);
	c = b;
	while (b) {
		printf("%d\n", a * (b%10));
		b /= 10;
	}
	printf("%d\n", a * c);
	return 0;
}