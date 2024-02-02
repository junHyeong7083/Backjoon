#include<iostream>
#include<string>
#include<stack>
#include<vector>
#include<algorithm>
#include<queue>
#include<cmath>
using namespace std;

int dx[4] = { -1, 1 ,0 ,0 };
int dy[4] = { 0,0,-1,1 };

int map[101][101] = { 0 };
int savemap[101][101] = { 0 };
bool visit[101][101] = { false };
int maxv = 0;
int n;



void DFS(int y, int x)
{
    visit[y][x] = true;

    for (int i = 0; i < 4; ++i)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || ny < 0 || nx >= n || ny >= n)
            continue;
        if (map[ny][nx] == 1 && !visit[ny][nx])
        {
            DFS(ny, nx);
        }
    }
}






void Reset()
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            map[i][j] = savemap[i][j];
            visit[i][j] = false;
        }
    }
}




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> map[i][j];
            savemap[i][j] = map[i][j];
            visit[i][j] = false;
            maxv = max(maxv, map[i][j]);
            
        }
    }
    int res = 1;
    for (int i = 1; i <= maxv; ++i)
    {
        int cnt = 0;
        for (int h = 0; h < n; ++h)
        {
            for (int w = 0; w < n; ++w)
            {
                if (map[h][w] <= i)
                    map[h][w] = 0;
                else
                    map[h][w] = 1;
            }
        }

        for (int h = 0; h < n; ++h)
        {
            for (int w = 0; w < n; ++w)
            {
                if (map[h][w] == 1 && !visit[h][w])
                {
                    // dfs
                    DFS(h, w);

                    cnt++;
                }
            }
        }
        Reset();
        res = max(res, cnt);
    }

    cout << res;


    return 0;
}    