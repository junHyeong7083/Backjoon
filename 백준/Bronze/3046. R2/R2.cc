#include<string.h>
#include<string>
#include<iostream>
using namespace std;
#pragma warning(disable : 4996)


int main()
{
	int R, S;
	scanf("%d %d", &R, &S);

	printf("%d", (2 * S) - R);

	return 0;
}