#include <iostream>
#include <vector>
#include<map>
#include<set>
#include<string>
#include<stdio.h>
#include<queue>
#include<stack>
using namespace std;

int f[1001] = { 0 };

//void dp(int n) {
//	// 1 /3;
//	int check = 1; // %2  == 1  : sk  / %2 == 0 cy
//	f[1] = 1;
//
//
//
//	while (n != 0)
//	{
//
//	}
//}


int main()
{
	int n;
	cin >> n;

	if (n % 2 == 1)
		cout << "SK";
	else
		cout << "CY";
	
	return 0;
}