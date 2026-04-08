#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)


int main()
{
	char n1[4], n2[4];
	int change;
	scanf("%s %s", n1, n2);

	change = n1[0];
	n1[0] = n1[2];
	n1[2] = change;

	change = n2[0];
	n2[0] = n2[2];
	n2[2] = change;

	int a, b, i = 3;

	for (int i = 0; i < 3; ++i)
	{
		if (i == 0)
		{
			a = (n1[i] - '0') * 100;
			b = (n2[i] - '0') * 100;
		}
		else if (i == 1)
		{
			a += (n1[i] - '0') * 10;
			b += (n2[i] - '0') * 10;
		}
		else
		{
			a += (n1[i] - '0');
			b += (n2[i] - '0');
		}
	}

	if (a > b) printf("%d", a);
	else printf("%d", b);


	return 0;
}