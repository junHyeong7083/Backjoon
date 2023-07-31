#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;




int arr[1001] = { 0 };
int f[1001] = { 0 };

void dp(int n)
{
	int res = 0;
	for (int e = 1; e <= n; ++e)
	{		
		cin >> arr[e]; // 배열 입력
	}
	for (int e = 1; e <= n; ++e)
	{
		for (int i = 0; i < e; ++i)
		{
			if (arr[e] > arr[i] && f[e] <= f[i])
				// arr[e] > arr[i] : 증가
				// 
				f[e] = f[i] + 1;
			if (f[e] > res)
				res = f[e];
		}
	}
	cout << res;
}



int main()
{
	ios::sync_with_stdio(0);
	cout.tie(NULL);
	cin.tie(NULL);

	int n;
	cin >> n;
	dp(n);
	return 0;
}