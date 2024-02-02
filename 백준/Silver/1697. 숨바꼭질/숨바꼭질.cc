#include<iostream>
#include<queue>

using namespace std;


int N, K;
bool visit[100001];
int res = 0;
void BFS(int a)
{
	queue<pair<int, int>> q;

	q.push(make_pair(a, 0));

	while (!q.empty())
	{
		int x = q.front().first;
		int cnt = q.front().second;

		q.pop();
		if (x == K)
		{
			res = cnt;
			break;
		}
		if (x + 1 >= 0 && x + 1 < 100001)
		{
			if (!visit[x + 1])
			{
				visit[x + 1] = true;
				q.push(make_pair(x + 1, cnt + 1));

			}
		}
		if (x - 1 >= 0 && x - 1 < 100001)
		{
			if (!visit[x - 1])
			{
				visit[x - 1] = true;
				q.push(make_pair(x - 1, cnt + 1));
			}
		}
		if (2 * x >= 0 && 2 * x < 100001)
		{
			if (!visit[2 * x])
			{
				visit[x * 2] = true;
				q.push(make_pair(2 * x, cnt + 1));
			}
		}

	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> K;
	visit[N] = true;
	BFS(N);
	cout << res;
	return 0;
}


