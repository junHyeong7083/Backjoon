#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;

int GCD(int a, int b)
{
	if (b == 0)
		return a;

	return GCD(b, a % b);
}

int main()
{
	long long int a, b, res;
	cin >> a >> b;
	 res = GCD(a, b);

	 cout << a * b / res;

	return 0;
}