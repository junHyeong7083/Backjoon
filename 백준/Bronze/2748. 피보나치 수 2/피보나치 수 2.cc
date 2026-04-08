#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#pragma warning(disable : 4996)

long long int arr[91];
long long int F(int num)
{	
	if (arr[num] != -1) return arr[num];
	
	return arr[num] = F(num - 1) + F(num - 2);

}

int main()
{
	int num;
	scanf("%d", &num);
	memset(arr, -1, sizeof(arr));
	arr[0] = 0;
	arr[1] = 1;

	printf("%lld", F(num));



	return 0;
}