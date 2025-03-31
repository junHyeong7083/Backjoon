#include <iostream>
#include <vector>
#include<queue>

using namespace std;

int f, s, g, u, d;
vector<int> dist;
vector<bool> visited;

int bfs()
{
    queue<int> qu;
    qu.push(s);
    dist[s] = 0;
    visited[s] = true;

    while (!qu.empty())
    {
        int cur = qu.front();
        qu.pop();

        if (cur == g) return dist[cur];

        int up = u + cur;
        if (up <= f && !visited[up])
        {
            visited[up] = true;
            dist[up] = dist[cur] + 1;
            qu.push(up);
        }

        int down = cur - d;
        if (down >= 1 && !visited[down])
        {
            visited[down] = true;
            dist[down] = dist[cur] + 1;
            qu.push(down);
        } 
    }

    return -1;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    /*
    f : 가장 높은
    s : 현재 위치
    g : 목표
    u : up
    d : down
    */

    cin >> f >> s >> g >> u >> d;
    dist.assign(f + 1, -1);
    visited.assign(f + 1, false);

    if (s == g)
        cout << "0" << "\n";
    else
    {
        int res = bfs();

        if (res == -1)
            cout << "use the stairs\n";
        else
            cout << res <<"\n";
    }


    return 0;
}
