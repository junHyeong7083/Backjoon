#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#pragma warning(disable : 4996)

int arr[50];
int F(int num)
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
	printf("%d", F(num));



	return 0;
}