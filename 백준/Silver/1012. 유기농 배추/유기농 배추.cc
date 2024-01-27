#include <string>
#include <vector>
#include <algorithm>
#include<cmath>
#include<iostream>
using namespace std;
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };


const int maxv = 50;
int map[maxv][maxv] = { 0 };
int visitited[maxv][maxv] = { false };
int M, N, K;
void dfs(int y, int x) {
	if (visitited[y][x]) return;
	visitited[y][x] = true;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || ny < 0 || nx >= M || ny >= N)continue;
		if (map[ny][nx] == 1 && !visitited[ny][nx])
			dfs(ny, nx);
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		cin >> M >> N >> K;

		for (int e = 0; e < N; ++e)
		{
			for (int w = 0; w < M; ++w)
			{
				map[e][w] = 0;
				visitited[e][w] = false;
			}
		}




		for (int e = 0; e < K; ++e)
		{
			int x, y;
			cin >> x >> y;
			map[y][x] = 1;
		}

		int cnt = 0;
		for (int e = 0; e < N; ++e)
		{
			for (int w = 0; w < M; ++w)
			{
				if (map[e][w] == 1 && !visitited[e][w])
				{
					dfs(e, w);
					cnt++;
				}

			}
		}
		cout <<  cnt << endl;

	}
	
}