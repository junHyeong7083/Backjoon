#include <stdio.h>
#include<string.h>
#pragma warning(disable : 4996)

char arr[256];

int main()
{
	
	scanf("%s", arr);
	int len = strlen(arr);
	int a = len;
	for (int i = 0; i < len; ++i)
	{
		if ((arr[i] == 'l' || arr[i] == 'n') && arr[i+1] == 'j')
			a--;
		if(arr[i] == 'd' && arr[i+1] == 'z' && arr[i+2] == '=')
			a--;
		if (arr[i] == '=' || arr[i] == '-')
			a--;
	}
	
	
	printf("%d", a);

	return 0;
	
}