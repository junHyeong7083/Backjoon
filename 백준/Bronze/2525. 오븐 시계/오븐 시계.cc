#include<iostream>
using namespace std;

int main()
{
	int a, b, c, ans;
	cin >> a >> b >> c;
	b = b + c;
	if (b >= 60)
	{
		ans = b / 60;
		b = b % 60;
		a += ans;
	}
	if (a >= 24)
		a = a % 24;
	cout << a << " " << b;

	return 0;

}