#include <stdio.h>
#include<iostream>
#include<string>
#pragma warning(disable : 4996)
using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;

	int ans;
	// N대 생산가격 A + 10*B = 10*C
	// A + N*B = N*C 
	// A / C - B = N
	ans = A / (C - B) + 1;

	if (B >= C)
	{
		printf("-1");
		return 0;
	}
	printf("%d", ans);
		
	return 0;
}