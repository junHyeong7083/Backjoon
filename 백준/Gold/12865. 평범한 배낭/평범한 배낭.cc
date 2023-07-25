#include<iostream>
#include<algorithm>
using namespace std;

int f[101][100001];
int value[101];
int weight[101];


void dp(int n, int k)
{
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= k; ++j)
		{
			if (j >= weight[i])
				f[i][j] = max(f[i - 1][j], f[i - 1][j - weight[i]] + value[i]);
			else
				f[i][j] = f[i - 1][j];

		}
	}
	cout << f[n][k];
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	
	int n, k;
	cin >> n >> k;
	
	for (int i = 1; i <= n; ++i)
	{
		cin >> weight[i] >> value[i];
	}

	dp(n, k);


	return 0;
}