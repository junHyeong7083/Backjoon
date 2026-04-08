#include <stdio.h>
#include<iostream>
#include<string>
#include<string.h>
#pragma warning(disable : 4996)
using namespace std;

int main()
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	if (w - x > h - y)
	{
		if (h - y > x) printf("%d", (x > y) ? y : x);
		else if (h - y > y)
			printf("%d", (y > x) ? x : y);
		else
			cout << h - y;
	}
	else
	{
		if (w - x > x) printf("%d", (x > y) ? y : x);
		else if (w - x > y) printf("%d", (y > x) ? x : y);
		else
			cout << w - x;
	}
	return 0;
}