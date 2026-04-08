#include<stdio.h>
#pragma warning(disable : 4996)

int Gdc(int B, int S)
{
	int m = (B % S);
	while (m != 0)
	{
		B = S;
		S = m;
		m = (B % S);
	}

	return S;
}


int main()
{
	int T;
	scanf("%d", &T);
	while (T--)
	{
		int a, b, check = 0;
		scanf("%d %d", &a, &b);
		
		if (a > b)
			printf("%d\n", a * b / Gdc(a, b));
		if (b > a)
		{
			printf("%d\n", a * b / Gdc(b, a));
		}
		if(a == b)
			printf("%d\n", a);
	}
	return 0;
}