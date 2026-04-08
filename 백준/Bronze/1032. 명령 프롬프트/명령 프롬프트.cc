#include<bits/stdc++.h>
using namespace std;
#pragma warning(disable : 4996)
typedef struct
{
	char input[51];
}cchh;
cchh ch[51];

int main()
{
	int t;
	cin >> t;
	char check[51]; // 최대길이 50
	for (int i = 0; i < t; ++i)
	{
		cin >> ch[i].input;
	}
	strcpy(check, ch[0].input);
	int len = strlen(check);
	for (int i = 1; i < t; ++i)
	{
		for (int j = 0; j < len; ++j)
		{
			if (check[j] != ch[i].input[j])
				check[j] = '?';
		}
	}
	cout << check;
	return 0;
}