#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int Q = 25, D = 10, N = 5, P = 1, check = 0;;
		int a;
		cin >> a;

		Q = a / 25;
		a %= 25;

		D = a / 10;
		a %= 10;

		N = a / 5;
		a %= 5;

		P = a;

		

		cout << Q << " " << D << " " << N << " " << P << endl;

	}




	return 0;
}