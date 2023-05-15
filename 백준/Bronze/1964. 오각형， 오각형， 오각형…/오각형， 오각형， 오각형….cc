#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main() 
{
	int n;
	cin >> n;
	long long  sum = 5;
	long long  num = 7;
	for (int i = 2; i <= n; i++)
	{
		sum += num;
		num += 3;
		sum = sum % 45678;
	}
	cout << sum;
}