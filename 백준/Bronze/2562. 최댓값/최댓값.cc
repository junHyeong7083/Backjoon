#include<stdio.h>
#pragma warning(disable : 4996)

int main()
{
	int n[9];
	int max = 0;
	int a;

	for (int i = 0; i < 9; ++i)
	{
		scanf("%d", &n[i]);
		if (n[i] > max)
		{
			max = n[i];
			a = i;
		}
		
		
	}
	printf("%d\n%d", max, a + 1);
	return 0;
}