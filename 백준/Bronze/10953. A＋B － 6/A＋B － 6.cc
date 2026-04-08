#include <stdio.h>
#include<string.h>
#include<string>
#include<iostream>
using namespace std;
#pragma warning(disable : 4996)


int main()
{
	int T;
	char a = ',';
	int b, c;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d%c%d", &b, &a, &c);
		printf("%d\n", b + c);
	}
	return 0;
}