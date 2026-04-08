#include <stdio.h>
#include<iostream>
#include<string>
#include<string.h>
#pragma warning(disable : 4996)
using namespace std;

bool Check(int n)
{
	while (n)
	{
		if (n % 10 == 4 || n % 10 == 7)
		{
			n /= 10;
		}
		else
			return false;
	}

	return true;
}
int main()
{
	int n, ans = 0;
	cin >> n;
	for (int i = n; i >= 4; --i)
	{
		if (Check(i))
		{
			ans = i;
			break;
		}
	
	}
	cout << ans;;

	return 0;
}