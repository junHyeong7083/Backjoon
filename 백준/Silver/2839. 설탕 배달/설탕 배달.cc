#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#pragma warning(disable : 4996)
int arr[5000];

int main()
{
	int N, cnt = 0;
	scanf("%d", &N);
	while (N)
	{
		if (N % 5 == 0)
		{		
			cnt += N / 5;
			break;
		}
		N -= 3;
		cnt++;
		if (N <= 0) break;

	}
	if (N < 0) printf("-1\n");
	else printf("%d\n", cnt);



	return 0;
}