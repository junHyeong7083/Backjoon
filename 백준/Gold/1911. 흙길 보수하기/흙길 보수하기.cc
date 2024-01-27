#include <string>
#include <vector>
#include <algorithm>
#include<cmath>
#include<iostream>
using namespace std;

bool Compare(const pair<int, int>& a, const pair<int, int>& b)
{
	if (a.first == b.first)
	{
		return a.second < b.second;
	}
	else
		return a.first < b.first;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	/*
	1   6
	8   12
	13  17
	
	*/

	int n, l;
	cin >> n >> l;
	vector<pair<int, int>> v;

	for (int e = 0; e < n; ++e)
	{
		int x, y;
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}

	sort(v.begin(), v.end(), Compare);

	int ans = 0;
	int currentPos = 0;
	for (int e = 0; e < v.size(); ++e)
	{
		int start = max(v[e].first, currentPos);
		int end = v[e].second;

		int cnt = (end - start + l - 1) / l;
		ans += cnt;

		currentPos = start+ cnt*l;

	}
	cout << ans;
	

	return 0;
}
