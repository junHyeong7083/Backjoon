#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)

int myArray[1000001];

int main()
{
	int number, max;
	scanf("%d %d", &number, &max);
	myArray[1] = 1;
	for (int i = 2; i <= 1000000; ++i)
	{
		if (myArray[i] == 1)
			continue;
		for (int j = i*2; j <= 1000000;j+=i )
		{
			myArray[j] = 1;
		}
	}
	for (int k = number; k <= max; ++k)
	{
		if (myArray[k] == 0)
			printf("%d\n", k);
	}
	return 0;
}