#include <stdio.h>
#include <string.h>
#include<iostream>

using namespace std;

int main() 
{
	int n,i; // n ==2
	int temp,check, cnt = 1;
	cin >> n;
	if (n == 1)
	{
		cout << "666";
		return 0;
	}

	for (i = 667; ; i++)
	{
		temp = i;
		check = 0;
		while (temp)
		{
			if (temp % 1000 == 666)
				check = 1;
	
			temp /= 10;
		}
		if (check)
		{
			cnt++;
			if (cnt == n)
				break;
		}
	}

	cout << i;
	
	return 0;
}