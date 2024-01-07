#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<string>
#include<stdio.h>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;
vector<int>a[101];
bool check[101];
int cnt = 0;
void dfs(int x)
{
	check[x] = true;
	for (int e = 0; e < a[x].size(); ++e)
	{
		int y = a[x][e];
		if (!check[y])
		{
			dfs(y);
			cnt++;
		}

	}
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	std::cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	for (int e = 0; e < m; ++e)
	{
		int u, v;
		cin >> u >> v;
		a[u].push_back(v);
		a[v].push_back(u);
	}
	dfs(1);
	cout << cnt << endl;
	return 0;
}