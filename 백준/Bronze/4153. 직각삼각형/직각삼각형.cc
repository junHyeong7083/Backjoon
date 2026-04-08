#include <stdio.h>
#include<string.h>
#include<string>
#include<iostream>
using namespace std;
#pragma warning(disable : 4996)


int main()
{
	long a, b, c;
	long ao, bo, co;
	while (1)
	{
		scanf("%d %d %d", &a, &b, &c);
		ao = a * a;
		bo = b * b;
		co = c * c;
		if (a == 0 && b == 0 && c == 0)
			break;
		if ((ao == bo + co) || (bo == ao + co) || (co == ao + bo))
			printf("right\n");
		else
			printf("wrong\n");	
	}
	return 0;
}