#include <iostream>

using namespace std;



bool g[1001][1001] = {{false}};
bool check[1001] = {false};
void dfs(int _n,int n)
{
  check[_n] = true;
  
  for(int e = 1; e <=n; ++e)
    {
      if(g[_n][e] && !check[e])
        dfs(e,n);
    }
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  int n,m;
  cin >> n >> m;
  for(int e = 0; e < m; ++e)
    {
      int u,v;
      cin >> u >>v;
      g[u][v] = true;
      g[v][u] = true;
    }

  int cnt = 0;
  for(int e = 1; e <= n; ++e)
    {
      if(!check[e])
      {
        cnt++;
        dfs(e,n);
      }  
      
    }
  cout <<cnt;
}