#include <iostream>
#include <algorithm>
#include <queue>
#include <utility>

using namespace std;

typedef long long ll;

// 상하좌우
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };
// 말 이동
int hordx[8] = { 1, 2, 1, 2, -1, -2, -2, -1 };
int hordy[8] = { 2, 1, -2, -1, -2, -1, 1, 2 };

int map[201][201];
int dist[201][201][31];

int k, w, h;

struct Node
{
    int y, x, k_used;
};

void bootstrap()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}

void init()
{
    cin >> k >> w >> h;
    for (int i = 0; i < h; ++i)
    {
        for (int j = 0; j < w; ++j)
        {
            cin >> map[i][j];
            for (int k_idx = 0; k_idx <= k; ++k_idx)
            {
                dist[i][j][k_idx] = -1; 
            }
        }
    }
}

void bfs(int _sy, int _sx)
{
    queue<Node> qu;
    qu.push({ _sy, _sx, 0 });
    dist[_sy][_sx][0] = 0;

    while (!qu.empty())
    {
        int cury = qu.front().y;
        int curx = qu.front().x;
        int curk = qu.front().k_used;
        qu.pop();

        if (cury == h - 1 && curx == w - 1) return;

        for (int i = 0; i < 4; ++i)
        {
            int ny = cury + dy[i];
            int nx = curx + dx[i];

            if (ny < 0 || nx < 0 || ny >= h || nx >= w) continue;
            if (map[ny][nx] == 0 && dist[ny][nx][curk] == -1)
            {
                dist[ny][nx][curk] = dist[cury][curx][curk] + 1;
                qu.push({ ny, nx, curk });
            }
        }

        if (curk < k)
        {
            for (int i = 0; i < 8; ++i)
            {
                int ny = cury + hordy[i];
                int nx = curx + hordx[i];

                if (ny < 0 || nx < 0 || ny >= h || nx >= w) continue;
                if (map[ny][nx] == 0 && dist[ny][nx][curk + 1] == -1)
                {
                    dist[ny][nx][curk + 1] = dist[cury][curx][curk] + 1;
                    qu.push({ ny, nx, curk + 1 });
                }
            }
        }
    }
}

void solve()
{
    bfs(0, 0);

    int ans = -1;
    for (int i = 0; i <= k; ++i)
    {
        if (dist[h - 1][w - 1][i] != -1)
        {
            if (ans == -1 || ans > dist[h - 1][w - 1][i])
                ans = dist[h - 1][w - 1][i];
        }
    }
    cout << ans;
}

int main()
{
    bootstrap();
    init();
    solve();

    return 0;
}