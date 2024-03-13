#include<string>
#include<algorithm>
#include<vector>
#include<iostream>
#include<queue>
using namespace std;

int M,N,H;
int tomato[104][104][104] = { 0 };
bool visit[104][104][104] = { false };
queue<pair<pair<int, int>, int>>qu; // z y x
// qu.first.first = h
// qu.first.second = n
// qu.second = m;

int dx[6] = { 0,0,1,-1,0,0 };
int dy[6] = { -1,1,0,0,0,0 };
int dz[6] = { 0,0,0,0,1,-1 };
int cnt[104][104][104] = { 0 } ;
int res = 0;
void BFS()
{
	while (!qu.empty())
	{
		int curx = qu.front().second;
		int cury = qu.front().first.second;
		int curz = qu.front().first.first;
		qu.pop();


		for (int e = 0; e < 6; ++e)
		{
			int nx = curx + dx[e];
			int ny = cury + dy[e];
			int nz = curz + dz[e];

			if (nx < 0 || nx >= M || ny < 0 || ny >= N
				|| nz < 0 || nz >= H )
				continue;

			if (tomato[nz][ny][nx] == 0 && !visit[nz][ny][nx])
			{
				visit[nz][ny][nx] = true;
				tomato[nz][ny][nx] = 1;
				qu.push(make_pair(make_pair(nz, ny), nx));
				cnt[nz][ny][nx] = cnt[curz][cury][curx] + 1;
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
	순서
	m,n,h;

	1 - 익은토마토
	0 - 익지않은 토마토
	-1 토마토 x

	위,아래,왼,오른,앞,뒤
	
	토마토 모두익으면 0
	모두 익지못하면 -1
	
	*/
	cin >> M >> N >> H;
	int tomatocnt = 0;
	for (int i = 0; i < H; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			for (int e = 0; e < M; ++e)
			{
				cin >> tomato[i][j][e];
				if (tomato[i][j][e] == 1)
				{
					qu.push(make_pair(make_pair(i, j), e));
					visit[i][j][e] = true;
				}
				if (tomato[i][j][e] == 0)
					cnt[i][j][e] = -1;
			}
		} 
	}
	BFS();
	bool er = false;
	for (int z = 0; z < H; ++z)
	{
		for (int y = 0; y < N; ++y)
		{
			for (int x = 0; x < M; ++x)
			{
				if (cnt[z][y][x] == -1)
				{
					er = true;
					break;
				}
				res = max(res, cnt[z][y][x]);
			}
		}
	}
	if (er)
		cout << "-1";
	else
		cout << res;
	
	return 0;
}