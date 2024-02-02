#include<iostream>
#include<string>
#include<stack>
#include<vector>
#include<algorithm>
#include<queue>
#include<cmath>
using namespace std;

int N, M;
int map[101][101];
int visit[101][101];
int dist[101][101] = { 0 };


int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,-1,1 };

queue<pair<int, int>> q;

void BFS(int _y, int _x)
{
    visit[_y][_x] = true;
    q.push(make_pair(_y, _x));
    dist[_y][_x] = 1;

    while (!q.empty())
    {
        int y = q.front().first; // y
        int x = q.front().second; // x

        q.pop();

        for (int e = 0; e < 4; ++e)
        {
            int nx = x + dx[e];
            int ny = y + dy[e];

            if (nx < 0 || ny < 0  || nx >= M || ny >= N || map[ny][nx] == 0)
                continue;
            if (!visit[ny][nx] && map[ny][nx] == 1)
            {
                visit[ny][nx] = true;
                q.push(make_pair(ny, nx));
                dist[ny][nx] = dist[y][x] + 1;

            }
        }
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

  /*
    n : 세로 / m 가로
  */
    cin >> N >> M;
    for (int i = 0; i < N; ++i)
    {
        string row;
        cin >> row;
        for (int j = 0; j < M; ++j)
        {
            map[i][j] = row[j] - '0';
        }
    }
    BFS(0, 0);
    cout << dist[N - 1][M - 1];
    return 0;
}