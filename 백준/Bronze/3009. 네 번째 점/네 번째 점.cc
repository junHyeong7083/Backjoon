#include<stdio.h>
#include<iostream>
using namespace std;


int main()
{
	int a1, a2, b1, b2, c1, c2;
	cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;

	int ans1 = 0, ans2 = 0;
	if (a1 == b1 || a1 == c1)
	{
		if (b1 - a1 == 0)
			ans1 = c1;
		else
			ans1 = b1;
	}
	else
	{
		ans1 = a1;
	}

	if (a2 == b2 || a2 == c2)
	{
		if (b2 - a2 == 0)
			ans2 = c2;
		else
			ans2 = b2;
	}
	else
	{
		ans2 = a2;
	}

	cout << ans1 << " " << ans2;

	return 0;
}