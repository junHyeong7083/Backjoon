#include<iostream>
#include<string.h>
#include<string>
using namespace std;


long long f[91] = { 0 };

void dp(int n)
{
	f[1] = 1;
	f[2] = 1;
	f[3] = 2;
	f[4] = 3;
	f[5] = 5;
	f[6] = 8;

	for (int i = 3; i <= n; ++i)
	{
		f[i] = f[i - 1] + f[i - 2];
	}
	cout << f[n];
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	int t;
	cin >> t;
	dp(t);

	return 0;
}