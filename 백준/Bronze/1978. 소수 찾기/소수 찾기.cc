#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)


int main()
{
	int N, cnt = 0;
	scanf("%d", &N);
	while (N--)
	{
		int number,divs = 0;
		scanf("%d", &number);

		if (number == 1) continue;
		for (int i = 2; i*i <= number; ++i)
		{
			if (number % i == 0)
				divs++;
		}
		if (divs==0) cnt++;
	}
	printf("%d", cnt);
	return 0;
}