#include<stdio.h>
#pragma warning(disable : 4996)

int main()
{
	int n,cnt = 0;
	scanf("%d", &n);

	if (n < 100)
		cnt = n;
	else
	{
		cnt = 99;
		int a, b, c;
		for (int i = 100; i <= n; ++i)
		{
			a = i / 100;
			b = (i % 100) / 10;
			c = i % 10;

			if ((a + c) == 2 * b)
				cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}