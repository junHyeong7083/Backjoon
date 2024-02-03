#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;


int N, M;
int tomato[1001][1001];
bool visit[1001][1001] = { false };

int dx[4] = { 1,-1,0, 0 };
int dy[4] = { 0,0,-1,1 };
// qu.first == y  , qu.second == x
queue<pair<int, int >> qu; 

void BFS()
{
	while (!qu.empty()) {
		int y = qu.front().first;
		int x = qu.front().second;
		qu.pop();

		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (ny < 0 || nx < 0 || ny >= N || nx >= M || tomato[ny][nx] == -1)
				continue;
			if (tomato[ny][nx] == 0 && !visit[ny][nx] ) {
				visit[ny][nx] = true;
				qu.push(make_pair(ny, nx));
				tomato[ny][nx] = tomato[y][x] + 1;
			}
		}
	}
}




int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	/*
	M : 가로/ N : 세로
	1 - 익은토마토
	0 - 안익은토마토
	-1 - 토마토 x

	상하좌우로 이동
	*/
	cin >> M >> N;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			cin >> tomato[i][j];
			if (tomato[i][j] == 1)
				qu.push(make_pair(i, j));
		}
	}

	BFS();

	int res = 0;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			if (tomato[i][j] == 0)
			{
				cout << "-1";
				return 0;
			}
			else
				res = max(res, tomato[i][j]);

		}
	}

	cout << res-1;

	return 0;
}


