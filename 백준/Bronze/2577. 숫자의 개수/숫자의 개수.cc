#include<stdio.h>
#pragma warning(disable : 4996)

int main()
{
	int a, b, c;
	int cmt[11] = { 0 };


	scanf("%d %d %d", &a, &b, &c);

	int k = a * b * c;
	while (k)
	{
		cmt[k % 10]++;
		k /= 10;

	}
	for (int i = 0; i <= 9; ++i)
	{
		printf("%d\n", cmt[i]);
	}



	return 0;
	
}