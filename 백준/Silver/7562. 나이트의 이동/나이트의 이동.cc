#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
#define  MAXV 333

int map[MAXV][MAXV];
queue<pair<int,int>>qu;

pair<int,int>start,target;

int l;
int dx[8] = {2, 1, -1, -2, -2, -1,  1,  2}; 
int dy[8] = {1, 2,  2,  1, -1, -2, -2, -1};


void BFS()
{
  while(!qu.empty())
    {
      int curx = qu.front().first;
      int cury = qu.front().second;
      qu.pop();
      if(curx == target.first && cury == target.second)
        break;
      

      for(int e = 0; e < 8; ++e)
        {
          int nx = curx + dx[e];
          int ny = cury + dy[e];

          if(nx < 0 || ny < 0 || nx >= l || ny >= l)
            continue;

          if(map[nx][ny]> 0)
            continue;
          map[nx][ny] = map[curx][cury] + 1;
          qu.push(make_pair(nx,ny));
          
        }
    }
  
}
void Init()
{
  while(!qu.empty())
    qu.pop();
  
  for(int i = 0;i <l; ++i)
    {
      for(int j = 0; j < l; ++j)
        map[i][j] = -1;
    }
}



int main() 
{
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  /*
  1. T
  2. SIZE
  3. START
  4. TARGET

  
  */
  int t;
  cin >> t;
  while(t--)
    {
      cin >> l;
      Init();
      cin >> start.first >> start.second;
      
      qu.push(make_pair(start.first,start.second));
      
      cin >> target.first >> target.second;
      
      map[start.first][start.second] = 0;
      BFS();
      cout << map[target.first][target.second] << "\n";
    }
  
  return 0;
}
