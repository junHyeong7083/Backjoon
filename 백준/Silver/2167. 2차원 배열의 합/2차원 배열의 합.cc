#include <iostream>
#include<string>
#include<vector>
using namespace std;
vector<vector<int>>arr;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	cin >> n >> m;
	vector<vector<int>> arr(n, vector<int>(m, 0));
	for (int a = 0; a < n; ++a)
	{
		for (int k = 0; k < m; ++k)
			cin >> arr[a][k]; // input
	}
	int k;
	cin >> k;

	while (k--)
	{
		int i, j, x, y;
		cin >> i >> j >> x >> y;
		int sum = 0;
		for (int q = i; q <= x; ++q)
		{
			for (int w = j; w <= y; ++w)
			{
				sum += arr[q-1][w-1];
			}
		}
		cout << sum << endl;
	}
	
	return 0;
}
