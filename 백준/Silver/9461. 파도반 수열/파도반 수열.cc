#include<iostream>
#include<string.h>
#include<string>
using namespace std;


long long f[101] = { 0 };

void dp(int n)
{
	f[1] = 1;
	f[2] = 1;
	f[3] = 1;
	f[4] = 2;
	f[5] = 2;
	f[6] = 3;
	f[7] = 4;

	for (int i = 4; i <= n; ++i)
	{
		f[i] = f[i - 2] + f[i - 3];
	}

	cout << f[n] << endl;

}





int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		int a;
		cin >> a;
		dp(a);
	}

	return 0;
}