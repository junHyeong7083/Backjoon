#include <stdio.h>
#include<iostream>
#include<string>
#pragma warning(disable : 4996)
using namespace std;

int main()
{
	char a;
	int n,Next = 0;
	scanf("%d", &n);
	Next = n;
	
	while (true)
	{
		cin >> a;
		if (a == '=')
		{
			cout << Next;
			break;
		}
		cin >> n;
		if (a == '+') { Next += n; }
		else if (a == '-') { Next -= n; }
		else if (a == '*') { Next *= n; }
		else if (a == '/') { Next /= n; }
	}
	return 0;
}