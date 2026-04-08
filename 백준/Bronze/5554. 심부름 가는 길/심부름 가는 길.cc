#include <stdio.h>
#include<iostream>
#include<string>
#pragma warning(disable : 4996)
using namespace std;

int main()
{
	int a, n= 4,sum = 0;
	while (n--)
	{
		scanf("%d", &a);
		sum += a;
	}
	int b = 0, c = 0;
	b = sum / 60;
	c = sum % 60;

	printf("%d\n%d", b, c);

	return 0;
}