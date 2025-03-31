#include <iostream>
#include <vector>
#include<queue>
#include<cmath>
using namespace std;

int n;
int map[3][3];
bool visited[3][3] = { false };
int dx[2] = { 1,0 };
int dy[2] = { 0, 1 };

queue<pair<int, int>> qu;
void BFS()
{
    while (!qu.empty())
    {
        int y = qu.front().first;
        int x = qu.front().second;
        qu.pop();

        if (map[y][x] == -1)
        {
            cout << "HaruHaru" << "\n";
            return;
        }

        int jumpForce = map[y][x];
        for (int e = 0; e < 2; ++e)
        {
            int ny = y + dy[e] * jumpForce;
            int nx = x + dx[e] * jumpForce;

            if (ny < 0 || ny >= n || nx < 0 || nx >= n || visited[ny][nx]) continue;

            visited[ny][nx] = true; 
            qu.push({ ny, nx });

        }
    }
    cout << "Hing" << "\n";
}



int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    /*
    출발선 항상 왼쪽, 가장위의 칸
    이동가능한 방향은 오른쪽과 아래
    가장 오른쪽 가장 아래칸을  이동 -> 승리 종료
    */
    cin >> n;

    for (int e = 0; e < n; ++e)
    {
        for (int w = 0; w < n; ++w)
            cin >> map[e][w];
    }
    qu.push(make_pair(0, 0));
    visited[0][0] = true;
    BFS();

    return 0;
}
