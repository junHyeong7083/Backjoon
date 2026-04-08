#include <stdio.h>
#include<iostream>
#include<string>
#pragma warning(disable : 4996)
using namespace std;

int main()
{
	int a, b, c, d, e, f = 0;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

	f = ((a * a) + (b * b) + (c * c) + (d * d) + (e*e)) % 10;

	printf("%d", f);
	return 0;
}