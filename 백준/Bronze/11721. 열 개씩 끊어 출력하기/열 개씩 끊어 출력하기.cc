#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)

char arr[100];
int main()
{
	scanf("%s", arr);
	int len = strlen(arr);
	for (int i = 0; i < len; ++i)
	{
		printf("%c", arr[i]);
		if (i % 10 == 9)
			printf("\n");
	}
	return 0;
}