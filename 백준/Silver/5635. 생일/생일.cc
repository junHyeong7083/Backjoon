#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;

	vector<pair<pair<int, int>, pair<int, string>>> v(t);
	
	for (int e = 0; e < t; ++e)
	{
		cin >> v[e].second.second >> v[e].second.first >> v[e].first.second >> v[e].first.first;
	}
	sort(v.begin(), v.end());
	cout << v[t - 1].second.second << endl << v[0].second.second;
	return 0;
}