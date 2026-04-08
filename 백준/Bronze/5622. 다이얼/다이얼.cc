#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)

int main()
{
	char arr[16];
	int cnt = 0;
	scanf("%s", arr);
	int len = strlen(arr);
	for (int  i = 0; i <= len; ++i)
	{
		if (arr[i] >= 'A' && arr[i] <= 'C')
			cnt += 3;
		else if (arr[i] >= 'D' && arr[i] <= 'F')
			cnt += 4;
		else if (arr[i] >= 'G' && arr[i] <= 'I')
			cnt += 5;
		else if (arr[i] >= 'J' && arr[i] <= 'L')
			cnt += 6;
		else if (arr[i] >= 'M' && arr[i] <= 'O')
			cnt += 7;
		else if (arr[i] >= 'P' && arr[i] <= 'S')
			cnt += 8;
		else if (arr[i] >= 'T' && arr[i] <= 'V')
			cnt += 9;
		else if(arr[i] >= 'W' && arr[i] <= 'Z')
			cnt += 10;
	}

	printf("%d", cnt);

	
	return 0;
}