#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<pair<int, int>>v[100001];


bool Check(int n, int a, int b, int mid)
{
	queue<int> qu;
	vector<bool> visit(n+1);

	qu.push(a);

	while (!qu.empty())
	{
		int currentPos = qu.front();
		qu.pop();

		if (currentPos == b)
			return true;
		for (int e = 0; e < v[currentPos].size(); ++e)
		{
			int nextPos = v[currentPos][e].first;
			int weight = v[currentPos][e].second;
			if (!visit[nextPos] && weight >= mid)
			{
				visit[nextPos] = 1;
				qu.push(nextPos);
			}
		}
	}
	return false;


	
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	int a, b, c;
	int maxc = 0;
	for (int e = 0; e < m; ++e)
	{
		cin >> a >> b >> c;
		v[a].push_back(make_pair(b, c));
		v[b].push_back(make_pair(a, c));

		maxc = max(c, maxc);
	}

	int cura, curb;
	cin >> cura >> curb;

	int start = 0, end = maxc, mid = 0;
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (Check(n,cura,curb,mid))
			start = mid + 1;
		else
			end = mid - 1;

	}

	cout << end;

	return 0;
}