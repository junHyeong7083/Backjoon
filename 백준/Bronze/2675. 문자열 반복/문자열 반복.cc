#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)

char Input[20];
int main()
{
	int T, N;
	scanf("%d", &T);
	while (T --)
	{
		scanf("%d %s", &N, Input);
		int len = strlen(Input);
		for (int i = 0; i < len; ++i)
		{
			for (int k = 0; k < N; ++k)  printf("%c",Input[i]); 
		}
		printf("\n");
	}
	return 0;
}