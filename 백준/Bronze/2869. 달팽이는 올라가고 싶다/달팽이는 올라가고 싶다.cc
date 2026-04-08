#include <stdio.h>
#include<iostream>
#include<string>
#pragma warning(disable : 4996)
using namespace std;

int main()
{
	int A, B, V, day;
	scanf("%d  %d  %d", &A, &B, &V);
	
	day = (V - B - 1) / (A - B );
	if (A >= V)
		cout << 1;
	else if(day == 0)
		cout << day;
	else
		cout << day + 1;
	
	

	return 0;


}