#include<bits/stdc++.h>
using namespace std;
#pragma warning(disable : 4996)

int reverse(int n)
{
	if (n < 10) 
		
		
		
		return n;
	else if (n < 100)
	{
		// 98  / : 9 % : 8
		n = (n % 10) * 10 + (n / 10);
		return n;
	}
	else if (n < 1000)
	{
		// 988 
		n = ((n % 100) % 10) * 100 + ((n % 100) / 10) * 10 + (n / 100);
		return n;
	}
	else if (n >= 1000)
	{
		n = n / 1000 + ((n % 1000) / 100) * 10 + (((n % 1000) % 100) / 10) * 100
			+ (((n % 1000) % 100) % 10) * 1000;
		return n;
	}
}



int main()
{
	int x, y;
	cin >> x >> y;

	cout << reverse(reverse(x)+reverse(y));

	return 0;
}