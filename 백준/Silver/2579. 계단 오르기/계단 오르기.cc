#include<iostream>
#include<algorithm>
using namespace std;

int  f[301] = { 0 };
int sum[301] = { 0 };

void dp(int n)
{
	for (int k = 1; k <= n; ++k)
	{
		cin >> f[k];
	}

	sum[1] = f[1]; // 1개의 원소
	sum[2] = f[1] + f[2];
	sum[3] = max(f[1], f[2]) + f[3];

	for (int i = 4; i <= n; ++i)
	{
		sum[i] = max(sum[i - 3] + f[i - 1], sum[i - 2]) + f[i];
	}


	cout << sum[n] << endl;
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