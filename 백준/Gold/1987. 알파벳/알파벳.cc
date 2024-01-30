#include<iostream>
#include<algorithm>
using namespace std;

int R,C;
int  Res = 0;
char map[21][21] = { 0 };
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0, 0,-1,1 };
int checkAlpha[26] = { 0 };

void DFS(int y, int x, int depth)
{
    Res = max(Res, depth);
    for (int i = 0; i < 4; ++i)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < C && ny >= 0 && ny < R&& checkAlpha[map[ny][nx] - 65]==0)
        {
            checkAlpha[map[ny][nx] - 65] = 1;
            DFS(ny, nx, depth + 1);
            checkAlpha[map[ny][nx] - 65] = 0;
        }
    }
}
int main()
{

    cin >> R >> C;
    for (int i = 0; i < R; ++i)
    {
        for (int j = 0; j < C; ++j)
        {
            cin >> map[i][j];
        }
    }

    checkAlpha[map[0][0] - 65] = 1;
    DFS(0, 0, 1);
    cout << Res;
    return 0;
}