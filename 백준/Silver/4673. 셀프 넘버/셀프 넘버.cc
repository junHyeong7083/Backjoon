#include<stdio.h>
#pragma warning(disable : 4996)



int Ca(int n)
{
	int a = n;
		while (n>0)
		{ 
			a += (n % 10);
			n /= 10;
		}

		return a;
}

int main()
{
	int arr[10001] = { 0 };
	int ap;
	for (int i = 0; i < 10001; ++i)
	{
		ap = Ca(i);
		if (ap < 10001)
		{
			arr[ap] = 1;

		}
	}
	for(int j = 0; j < 10001; ++j)
	{
	    	if	(arr[j] != 1)
		    printf("%d\n", j);
		
	}


	return 0;
}