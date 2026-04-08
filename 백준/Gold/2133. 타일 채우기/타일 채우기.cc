#include<iostream>
using namespace std;
long long int f[1001] = { 0 };


void dp(int n)
{
	f[1] = 0;
	f[2] = 3;
	f[3] = 0;
	f[4] = 11;
	f[5] = 0;
	if (n % 2 == 1)
	{
		cout << 0;
		return;
	}
	else
	{
		for (int e = 6; e <= n; ++e)
		{
			f[e] = f[e - 2] * 4 - f[e - 4];
			
		}
		cout << f[n];
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	dp(n);
	return 0;
}