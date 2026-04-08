#include <stdio.h>
#include<iostream>
#include<string>
#pragma warning(disable : 4996)
using namespace std;

int main()
{
	int a, b, c, d, e, f, g, h;
	int sum = 0, aa = 0, bb = 0, cc = 0,dd= 0;

	scanf("%d %d", &a, &b);
	sum += b;
	aa = sum;
	scanf("%d %d", &c, &d);
	sum -= c;
	sum += d;
	bb = sum;
	scanf("%d %d", &e, &f);
	sum -= e;
	sum += f;
	cc = sum;
	scanf("%d %d", &g, &h);
	sum -= g;
	sum += h;
	dd = sum;
	
	if (aa > bb && aa > cc && aa > dd)
		printf("%d", aa);
	else if (bb > aa && bb > cc && bb > dd)
		printf("%d", bb);
	else if (cc > aa && cc > bb & cc > dd)
		printf("%d", cc);
	else if (dd > aa && dd > bb && dd > cc)
		printf("%d", dd);

	return 0;
}