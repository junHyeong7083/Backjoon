#include<stdio.h>
#pragma warning(disable : 4996)

int main()
{

	int n; // 입력할 수

	scanf("%d", &n);

	int na = n;

	int count = 0;
	while (1)
	{
		count++;
		int n1 = n % 10;
		int n10 = n / 10;
		int a = n1 + n10;
		int b = (n1 * 10) + (a % 10);
		if (b == na)
			break;

		n = b;
	}

	printf("%d", count);

	return 0;
}
