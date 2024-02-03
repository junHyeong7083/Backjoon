#include <iostream>
#include <queue>
#include <cstring>
#include<algorithm>
using namespace std;

int map[9][9];
int save[9][9];
bool visit[9][9] = { false };
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

int N, M, cnt = 3, ans = 0;

void BFS()
{
    for (int i = 0; i < N; i++)
        for (int j = 0.; j < M; j++)
        {
            visit[i][j] = false;
            save[i][j] = map[i][j];
        }


    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (save[i][j] == 2)
            {
                queue<pair<int, int>> q;

                q.push(make_pair(i,j));
                visit[i][j] = true;

                while (!q.empty())
                {
                    int y = q.front().first;
                    int x = q.front().second;
                    q.pop();

                    for (int e = 0; e < 4; e++)
                    {
                        int ny = y + dy[e];
                        int nx = x + dx[e];

                        if (nx < 0 || ny < 0 || nx >= M || ny >= N)
                            continue;


                        if (!visit[ny][nx] && save[ny][nx] == 0)
                        {
                            q.push(make_pair( ny, nx ));
                            visit[ny][nx] = true;
                            save[ny][nx] = 2;
                        }
                    }
                }
            }
        }
    }
    int temp = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (save[i][j] == 0)
                temp++;
        }
    }

    ans = max(ans, temp);
}

void Wall()
{
    if (cnt == 0)
        return BFS();

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (map[i][j] == 0)
            {
                cnt--;
                map[i][j] = 1;
                Wall();
       
                cnt++;
                map[i][j] = 0;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N >> M;
    for (int e = 0; e < N; ++e)
    {
        for (int w = 0; w < M; ++w)
            cin >> map[e][w];
    }
    Wall();
    cout << ans;

    return 0;
}