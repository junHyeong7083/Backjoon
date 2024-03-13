#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n;
queue<int> q;
int l, r;
int v[10001] = { 0 };
bool visit[10001] = {false};
int res[10001]= { 0 };

void BFS() 
{
   q.push(l);
  visit[l] = true;
  while(!q.empty())
    {
      int cur = q.front();
      q.pop();

      if(cur == r)
        break;
      for(int e = cur+v[cur]; e <= n; e+=v[cur])
        {
          if(visit[e])
            continue;
          q.push(e);
          res[e] = res[cur]+1;
          visit[e] = true;
        }

      for(int e = cur-v[cur]; e >= 1; e-=v[cur])
        {
          if(visit[e])
            continue;
          q.push(e);
          res[e] = res[cur] +1;
          visit[e] = true;
        }
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int e = 1; e <= n; ++e)
        cin >> v[e];

    cin >> l >> r;
    if(v[l] == 1)
    {
      cout << 1;
      return 0;
    }
    else if(l == r)
    {
      cout << 0;
      return 0;
    }
  
    BFS();
    if(!res[r])
      cout <<"-1";
    else
      cout << res[r];

    return 0;
}
