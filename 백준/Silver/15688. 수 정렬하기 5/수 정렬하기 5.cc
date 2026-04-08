#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<int>v(n);
	for (int e = 0; e < n; ++e)
		cin >> v[e];

	sort(v.begin(), v.end());

	for (int e = 0; e < v.size(); ++e)
		cout << v[e] << "\n";

	return 0;
}