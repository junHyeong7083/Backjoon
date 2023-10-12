#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int cnt = 0;
int isPrime[1001]; // 0이면 소수, 1이면 합성수

int primeSieve(int n, int k)
{
	for (int i = 2; i <= n; i++)
	{
		if (isPrime[i] == 0)
		{
			cnt++;
			if (cnt == k)
				return i;

			for (int j = i * i; j <= n; j += i)
			{
				if (isPrime[j] == 0) {

					isPrime[j] = 1;
					cnt++;
					if (cnt == k)
						return j;
				}
			}
		}
	}
}

int main()
{
	int N, K;

	scanf("%d%d", &N, &K);

	printf("%d\n", primeSieve(N, K));

	return 0;
}