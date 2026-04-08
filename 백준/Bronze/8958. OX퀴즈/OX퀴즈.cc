#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)

int main()
{
	int t;
	char arr[256];

	scanf("%d", &t);
	for (int i = 0; i < t; ++i)
	{
		int a = 0, b = 0;
		 // a 기본점수(1) b 더할점수
		scanf("%s", arr);
		

		for (int k = 0; k < strlen(arr); ++k)
		{
			if (arr[k] == 'O')
			{
				
				a += 1 + b;

				b++;
			}
			else
			{
				b = 0;
			}
		
			
		}
		printf("%d\n", a);
	}
		
	return 0;
}
