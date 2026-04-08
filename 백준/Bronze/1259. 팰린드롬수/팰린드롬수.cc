#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)
int main()
{
	while (true)
	{
		
		char A[256];
		int check = 1; 
		scanf("%s", &A);
		if (A[0] == '0')
			break;
		int len = strlen(A);
		for (int i = 0; i < len / 2; ++i)
		{
			if (A[i] != A[len - i - 1])
			{
				check = 0;
			}
		}
		
		if (check == 1)
			printf("yes\n");
		if (check == 0)
			printf("no\n");
	}

	return 0;
}