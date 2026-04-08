#include <stdio.h>
#include<iostream>
#include<string>
#pragma warning(disable : 4996)
using namespace std;

int main()
{
	int a;
	int n = 5,sum = 0;
	while (n --)
	{
		scanf("%d", &a);
		if (a <= 40)
			a = 40;
		sum += a;

	}
	printf("%d", sum / 5);


	return 0;
}