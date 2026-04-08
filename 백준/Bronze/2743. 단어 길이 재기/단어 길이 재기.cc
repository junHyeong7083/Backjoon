#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)
int main()
{
	char arr[256] = { 0 };
	scanf("%s", &arr);

	int check = 0;
	int len = strlen(arr);
	for (int i = 0; i < len; ++i)
	{
		check++;
	}
	printf("%d", check);

	return 0;
}