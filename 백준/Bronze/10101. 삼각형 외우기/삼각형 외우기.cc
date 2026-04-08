#include<bits/stdc++.h>
using namespace std;
#pragma warning(disable : 4996)

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int sum = a + b + c;
	if (sum == 180)
	{
		if (a == b && b == c)
			cout << "Equilateral";
		else if (a == b || b == c || c == a)
			cout << "Isosceles";
		else
			cout << "Scalene";
	}
	else
		cout << "Error";
	return 0;
}