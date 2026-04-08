#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<malloc.h>
using namespace std;

int main()
{
	int a = 300, b = 60, c = 10, error = -1;
	int T, aa = 0, bb = 0, cc = 0;
	cin >> T;
	if (T % 10 == 0)
	{
		aa = T / a;
		bb = (T % a) / b;
		cc = ((T % a) % b) / c;
		cout << aa <<" " << bb << " " << cc;
	}
	else
		cout << error;

	return 0;
}