#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;




int arr[100001];
int f[100001];

void dp(int n)
{
	f[0] = arr[0];
	int ans = f[0];
	for (int e = 1; e < n; ++e)
	{
		f[e] = max(f[e- 1] + arr[e], arr[e]);
	}
	int mm = -100000;
	for (int k = 0; k < n; ++k)
	{
		if (mm < f[k])
			mm = f[k];
	}
	cout << mm << endl;
}



int main()
{
	ios::sync_with_stdio(0);
	cout.tie(NULL);
	cin.tie(NULL);

	int n;
	cin >> n;

	for (int e = 0; e < n; ++e)
	{
		cin >> arr[e];
	}
	dp(n);

	return 0;
}