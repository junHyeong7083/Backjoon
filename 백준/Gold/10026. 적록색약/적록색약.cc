#include<iostream>
#include<vector>
#include<algorithm>
#include <string>
using namespace std;


int dx[4] = {-1,1,0,0 };
int dy[4] = {0,0,-1,1 };


char map[101][101] = { };
bool visit[101][101] = { };
int N;


void DFS(int y,int x, char color)
{
  if(visit[y][x])
    return;
  visit[y][x] = true;

  
  for(int i = 0; i < 4; ++i)
    {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if(nx < 0 || nx >= N || ny < 0 || ny >= N)      
        continue;
      if( map[ny][nx] == color)
        DFS(ny,nx,color);
    }
}


int CountRes()
{
  int cnt = 0;
  for(int i = 0; i < N; ++i)
      for(int j = 0; j < N; ++j)
          if(!visit[i][j])
          {
            DFS(i, j, map[i][j]);
            cnt++;
          }
        
    
  return cnt;
}

void ResetVisit()
{
  for(int i = 0; i < N; ++i)
      for(int j = 0; j<N; ++j)
        visit[i][j] = false;
}

void ChangeMap()
{
  for(int i = 0; i < N; ++i)
  {
    for(int j = 0; j < N; ++j)
      {
        if(map[i][j] == 'G')
        {
          map[i][j] = 'R';
        }  
      }
  }
}


int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  /*
  1.색약x R G B
  2.색약o (R == G) B
  */
  cin >> N;
  for(int i = 0; i < N; ++i)
    {
      for(int j = 0; j < N; ++j)
        {
          cin >> map[i][j];
          visit[i][j] = false;
        }
    }

  int cntNormal = CountRes();
  
  ResetVisit();
  ChangeMap();

  int cntWeak = CountRes();

  cout << cntNormal << " " << cntWeak;

  
  return 0;
}