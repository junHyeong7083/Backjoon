#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, a, b, m;
vector<int> graph[101]; 
int dist[101];

int bfs(int start, int target)
{
    queue<int> q;
    q.push(start);
    dist[start] = 0; 

    while (!q.empty()) 
    {
        int current = q.front();
        q.pop();

     

        if (current == target) 
            return dist[current];
       

        for (int next : graph[current]) 
        {
            if (dist[next] == -1)
            { 
                dist[next] = dist[current] + 1;
                q.push(next);
            }
        }
    }
    return -1; 
}

int main()
{
    cin >> n;  
    cin >> a >> b;  
    cin >> m;  

    
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);  
    }

  

   fill(dist, dist + 101, -1);  


    int result = bfs(a, b);

    cout << result <<"\n";
    return 0;
}
