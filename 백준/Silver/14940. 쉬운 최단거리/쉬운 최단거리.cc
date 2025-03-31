#include <iostream>
#include <vector>
#include<queue>
#include<cmath>
using namespace std;

int n, m;
int map[1001][1001];

bool visited[1001][1001];
int dist[1001][1001];
 
int dx[4] = { 1, -1, 0,0 };
int dy[4] = { 0, 0, 1, -1 };

queue<pair<int, int>> qu;
void BFS()
{
    while (!qu.empty())
    {
        int y = qu.front().first;
        int x = qu.front().second;

        qu.pop();

        for (int e = 0; e < 4; ++e)
        {
            int ny = y + dy[e];
            int nx = x + dx[e];

            if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
            if (dist[ny][nx] != -1 || map[ny][nx] == 0) continue;

            visited[ny][nx] = true; 
            dist[ny][nx] = dist[y][x] + 1;
            qu.push({ ny, nx });

        }
    }

}



int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for (int e = 0; e < n; ++e)
    {
        for (int w = 0; w < m; ++w)
        {
            cin >> map[e][w];
            dist[e][w] = -1; 

            if (map[e][w] == 2)
            {
                qu.push({ e, w });
                dist[e][w] = 0;
                visited[e][w] = true;
            }
        }
    }
    
    BFS();

    // 출력
    for (int e = 0; e < n; ++e) {
        for (int w = 0; w < m; ++w) 
        {
            if (map[e][w] == 0) 
                cout << "0 ";
            
            else 
                cout << dist[e][w] << " ";
            
        }
        cout << "\n";
    }

 

    return 0;
}
