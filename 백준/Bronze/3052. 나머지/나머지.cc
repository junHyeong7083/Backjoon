#include<stdio.h>
#pragma warning(disable : 4996)

int main()
{
	int arr[42];
	int a= 0; // 입력
	int b = 0; // 체크

	for (int i = 0; i < 42; ++i)
	{
		arr[i] = 0;
	}
	for (int k = 0; k < 10; ++k)
	{
		scanf("%d", &a);
		arr[a % 42] += 1;
	}
	for (int j = 0; j < 42; ++j)
	{
		if (arr[j] >= 1)
		{
			b++;
		}
	}
	printf("%d", b);

	
	return 0;
}
