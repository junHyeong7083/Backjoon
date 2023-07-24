#include<iostream>
using namespace std;
int f[1001] = { 0 };

void dp(int n)
{
	f[0] = 1;
	f[1] = 1;

	for (int i = 2; i <= n; ++i)
	{
		f[i] = (f[i - 1] + f[i - 2])%10007;
	}
	cout << f[n] << endl;
}



int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n;
	cin >> n;
	dp(n);

	return 0;
}