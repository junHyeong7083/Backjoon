#include <stdio.h>
#include<string.h>
#include<string>
#include<iostream>
using namespace std;
#pragma warning(disable : 4996)


char arr[256];
int main()
{
	int n,cnt = 0;
	scanf("%d", &n);
	while (n--)
	{
		bool CheckArray[28] = {};
		bool Check = true;
		scanf("%s", arr);

		CheckArray[arr[0] - 'a'] = true;
		for (int i = 1; arr[i] != NULL; ++i)
		{
			if (CheckArray[arr[i] - 'a'])
			{
				if (arr[i] == arr[i - 1])
					continue;
				else
					Check = false;
			}
			else
				CheckArray[arr[i] - 'a'] = true;
		}
		if (Check)
			cnt++;
	}
	printf("%d", cnt);
	return 0;
}