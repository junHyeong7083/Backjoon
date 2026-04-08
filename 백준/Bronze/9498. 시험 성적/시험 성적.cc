#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a; // 입력할 점수
	scanf("%d", &a);
	
	if (90 <= a)
		printf("A");
	else if (80 <= a )
	{
		printf("B");
	}
	else if (70 <= a )
	{
		printf("C");
	}
	else if (60 <= a)
	{
		printf("D");
	}
	else
	{
		printf("F");
	}
	


	return 0;
}