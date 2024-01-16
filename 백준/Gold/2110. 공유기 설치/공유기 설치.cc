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
	
	int n, c;
	cin >> n >> c;
	vector<int> v;
	for (int e = 0; e < n; ++e)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	
	int start = 1;
	int end = v[v.size()-1] - v[0];
	int ans = 0;
	while (start <= end)
	{
		int mid = (start + end) / 2;
		int cnt = 1;
		int pre = v[0];
		
		for (int e = 1; e < n; ++e)
		{
			if (v[e] - pre >= mid)
			{
				cnt++;
				pre = v[e];
			}
		}

		if (cnt >= c)
		{
			ans = mid;
			start = mid + 1;
		}
		else
			end = mid - 1;

	}

	cout << ans;


    return 0;
}