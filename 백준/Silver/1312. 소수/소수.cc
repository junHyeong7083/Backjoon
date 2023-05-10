#include<stdio.h>
#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main()
{
	int a, b, n;
	int result;		//결과를 받을변수

	cin >> a >> b >> n;

	for (int i = 0; i < n; i++)		//n번째 자리수를 구하기 위해서 n번을 반복
	{
		// 73 10
		// a = 3
		// a = 30

		a=a % b;		//0.571...
		a= a * 10;	//5.71...
		result = a / b;	//결과값
	}

	printf("%d", result);
	return 0;
}