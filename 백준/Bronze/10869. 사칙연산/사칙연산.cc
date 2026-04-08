#include<stdio.h>
#pragma warning(disable : 4996)


int main()
{
	int A, B;

	scanf("%d" , &A);
	scanf("%d", &B);

	printf("%d\n", A + B);
	printf("%d\n", A - B);
	printf("%d\n", A * B);
	printf("%d\n", A / B);
	printf("%d\n", A % B);
	return 0;
}