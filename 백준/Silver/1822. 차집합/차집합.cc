#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	map<int, int>ma;
	int n, m;
	cin >> n >> m;

	for (int e = 0; e < n; ++e)
	{
		int x;
		cin >> x;

		ma[x]++;
	}

	for (int e = 0; e < m; ++e)
	{
		int x;
		cin >> x;

		ma[x]--;
	}

	vector<pair<int,int>>v(ma.begin(), ma.end());
	vector<int>res;
	int cnt = 0;
	sort(v.begin(), v.end());
	for (int e = 0; e < v.size(); ++e)
	{
		if (v[e].second == 1)
		{
			cnt++;
			res.push_back(v[e].first);
		}
	}

	cout << cnt<<"\n";
	for (int e = 0; e < res.size(); ++e)
		cout << res[e] << " ";

	return 0;
}