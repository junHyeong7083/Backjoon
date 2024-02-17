#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int n;
int res[100001];
bool visit[100001];
vector<int> graph[100001];
void BFS()
{
	queue<int> q;
	visit[1] = true;
	q.push(1);
	while (!q.empty())
	{
		int p = q.front(); 
		q.pop();
	
		for (int e = 0; e < graph[p].size(); ++e)
		{
			int c = graph[p][e];
			if (!visit[c])
			{
				res[c] = p;
				visit[c] = true;
				q.push(c);
			}
		}
	}
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	for (int e = 0; e < n; ++e)
	{
		int x, y;
		cin >> x >> y;

		graph[x].push_back(y);
		graph[y].push_back(x);
	}

	BFS();

	for (int e = 2; e <= n; ++e)
		cout << res[e] << "\n";

	return 0;
}