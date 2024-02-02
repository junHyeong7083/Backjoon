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

int map[101][101] = { 1 };
int visit[101][101] = { false };

int M, N,K;



vector<int> v;
int check = 0;
void DFS(int y, int x)
{
    if (!visit[y][x])
    {
        check++;
        visit[y][x] = true;
    }

    for (int e = 0; e < 4; ++e)
    {
        int nx = x + dx[e];
        int ny = y + dy[e];

        if (nx < 0 || ny < 0 || nx >= N || ny >= M)
            continue;

        if (map[ny][nx] == 1 && !visit[ny][nx])
            DFS(ny, nx);
    }

}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    
    /*
    눈금의 간격 m,n
    m : 세로 / n : 가로
    k개의 직사각형
    왼쪽아래 x,y;
    오른쪽 위 x,y 순서
    */

    cin >> M >> N >> K;
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            map[i][j] = 1;
            visit[i][j] = false;
        }
    }
    while (K--)
    {
        int lx, ly, rx, ry;
        cin >> lx >> ly >> rx >> ry;

        for (int i = ly; i < ry; ++i)
        {
            for (int j = lx; j < rx; ++j)
                map[i][j] = 0;
        }
    }

    int cnt = 0;
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (map[i][j] == 1 && !visit[i][j])
            {
                check = 0;
                DFS(i, j);
                cnt++;
                v.push_back(check);
            }
        }
    }

    cout << cnt << endl;
    sort(v.begin(), v.end());
    for (int e = 0; e < v.size(); ++e)
        cout << v[e] << " ";
    return 0;
}    
