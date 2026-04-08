#include<stdio.h>
#pragma warning(disable : 4996)

int main()
{
	int n,add = 0;
	scanf("%d", &n);

	char arr[100];
	scanf("%s", &arr);
	
	for (int i = 0; i < n; ++i)
	{
		
		add += arr[i] - '0';
	}

	printf("%d", add);

	return 0;
}