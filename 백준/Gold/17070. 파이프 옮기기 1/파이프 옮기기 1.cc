#include<iostream>
#include<queue>
#include<tuple>
using namespace std;

int N;
int map[16][16];
int res = 0;
void DFS(int y, int x, int dir) 
{
    if (y == N - 1 && x == N - 1) 
    {
        res++;
        return;
    }

    if (dir == 0 || dir == 1) 
    {
        int nx = x + 1;
        int ny = y;
        if (nx < N && map[ny][nx] == 0) 
            DFS(ny, nx, 0); // 가로
        
    }
    if (dir == 2 || dir == 1) 
    {
        int nx = x;
        int ny = y + 1;
        if (ny < N && map[ny][nx] == 0) 
            DFS(ny, nx, 2); // 세로
    }

    int nx = x + 1;
    int ny = y + 1;
    if (nx < N && ny < N) {
        if (map[y][x + 1] == 0 && map[y + 1][x] == 0 && map[y + 1][x + 1] == 0) 
            DFS(ny, nx, 1); // 대각선
        
    }
    
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; ++i) 
    {
        for (int j = 0; j < N; ++j)
        {
            cin >> map[i][j];
        }
    }
    DFS(0, 1, 0);
    cout << res;

    return 0;
}
