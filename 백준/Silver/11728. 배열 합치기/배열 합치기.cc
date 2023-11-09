#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int>v1;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	for (int e = 0; e < n + m; ++e)
	{
		int a;
		cin >> a;
		v1.push_back(a);
	}
	//sort(v.begin(), v.end());
	sort(v1.begin(), v1.end());
	for (int e = 0; e < v1.size(); ++e)
	{
		cout << v1[e] << " ";
	}
	return 0;
}