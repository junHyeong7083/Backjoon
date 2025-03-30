#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
#include <algorithm>

using namespace std;

int n, k;
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };
int map[201][201];

struct Virus 
{
    int type, y, x, time;

    bool operator>(const Virus& v2) const 
    {
        if (time == v2.time)
        {
            return type > v2.type; 
        }
        return time > v2.time;  
    }
};

priority_queue<Virus, vector<Virus>, greater<Virus>> pq; 


void ShowMap()
{
    cout << "show map!!" << "\n";
    for (int e = 0; e < n; ++e)
    {
        for (int w = 0; w < n; ++w)
        {
            cout << map[e][w];
        }
        cout << "\n";
    }
}


void bfs(int s)
{
    while (!pq.empty())
    {
        Virus cur = pq.top();
        pq.pop();
        if (cur.time > s) break; 
        for (int i = 0; i < 4; ++i)
        {
            int ny = cur.y + dy[i];
            int nx = cur.x + dx[i];

            if (ny >= 0 && ny < n && nx >= 0 && nx < n && map[ny][nx] == 0)
            {
                map[ny][nx] = cur.type;
                pq.push({ cur.type, ny, nx, cur.time + 1 });
            }
        }
    }
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> map[i][j];
            if (map[i][j] != 0)
            {
                pq.push({ map[i][j], i, j, 1 });
            }
               
        }
    }

    int s, x, y;
    cin >> s >> x >> y;

    bfs(s);

    cout << map[x - 1][y - 1];
    return 0;
}
