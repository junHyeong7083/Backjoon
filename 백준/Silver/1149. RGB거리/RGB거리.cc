#include<iostream>
#include<algorithm>
using namespace std;

int f[1001][3] = { 0	 };


void dp(int n)
{
	for (int i = 1; i <= n; ++i)
	{
		cin >> f[i][0] >> f[i][1] >> f[i][2];

		f[i][0] += min(f[i - 1][1], f[i - 1][2]);
		f[i][1] += min(f[i - 1][0], f[i - 1][2]);
		f[i][2] += min(f[i - 1][0], f[i - 1][1]);
	}
	int result = min(f[n][0],min( f[n][1], f[n][2]));

	cout << result;
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