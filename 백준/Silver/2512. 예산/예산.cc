#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<string>
#include<queue>
#include<stack>
#include<algorithm>
#include<cmath>
using namespace std;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	std::cout.tie(NULL);
	
	int n;
	cin >> n;

	vector<int>v;
	
	for (int e = 0; e < n; ++e)
	{
		int money;
		cin >> money;
		v.push_back(money);
	}
	int m;
	cin >> m;

	sort(v.begin(), v.end());

	int start = 0;
	int end = v[v.size()- 1];
	while (start <= end)
	{
		int mid = (start + end) / 2;
		long long sum = 0;
		for (int e = 0; e < n; ++e)
		{
			sum += min(mid, v[e]);
		}
		if (sum <= m)
			start = mid + 1;
		else
			end = mid - 1;
	}
	cout << end;

    return 0;
}