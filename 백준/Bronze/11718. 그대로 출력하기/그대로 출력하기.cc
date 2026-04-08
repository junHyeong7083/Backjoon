#include <stdio.h>
#include<iostream>
#include<string>
#include<string.h>
#pragma warning(disable : 4996)
using namespace std;

int main()
{
	char a;
	a = getchar();

	while (a != -1)
	{
		putchar(a);
		a = getchar();
	}
	return 0;
}