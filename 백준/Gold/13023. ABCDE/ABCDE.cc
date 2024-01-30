#include<iostream>
#include<vector>
#include<algorithm>
#include <string>
using namespace std;


int dx[4] = {-1,1,0,0 };
int dy[4] = {0,0,-1,1 };

vector<int>v[2001];
bool visit[2000];

bool isOk = false;


void DFS(int next, int check)
{
  if(check == 4)
  {
    isOk = true;
    return;
  }
  visit[next] = true;
  for(int i = 0; i < v[next].size(); i++)
    {
      int nn= v[next][i];
      if(!visit[nn] && !isOk)
        DFS(nn, check+1);
    }
  visit[next] = false;
}



int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n,m;
  cin >> n >> m;

  for(int i = 0; i < m; ++i)
    {
      int a,b;
      cin >> a >> b;
      v[a].push_back(b);
      v[b].push_back(a);
    }
  for(int i = 0; i < n; ++i)
  {
    DFS(i, 0);
    if(isOk)
      break;
  }
  if(isOk)
    cout << 1;
  else
    cout << 0;
  
  return 0;
}