#include<stdio.h>
#pragma warning(disable : 4996)

int main()
{
	int n;
	int max = 1000000;
	int min =  -1000000;
	int a;

	scanf("%d", &n);


	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &a);

		if (i == 0)
		{
	    max = a;
		min = a;
      	}
		if (a >= max)
			max = a;
		if (a <= min)
			min = a;

	}

	printf("%d %d", min, max);







	return 0;
}