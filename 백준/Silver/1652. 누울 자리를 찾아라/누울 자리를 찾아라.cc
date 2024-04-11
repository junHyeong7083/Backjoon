#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

char map[101][101];



int row(int n)
{
  int cnt =0;
  for(int e =0; e < n; ++e)
    {
      int check = 0;
      for(int w = 0; w < n; ++w)
        {
          if(map[e][w] != 'X')
          {
            check ++;
            if(w ==n-1)
            {
              if(check >= 2)
                cnt++;
              check = 0;
            }
          }
          else if(map[e][w] == 'X' || w == n-1)
          {
            if(check>=2)
              cnt ++;
            check = 0;
          }
        }
    }

  
  return cnt;
}

int col(int n)
{
  int cnt = 0;
  for(int e = 0; e < n; ++e)
    {
      int check = 0;
      for(int w = 0; w < n; ++w)
        {
          if(map[w][e] != 'X')
          {
            check ++;
            if(w ==n-1)
            {
              if(check >= 2)
                cnt++;
              check = 0;
            }
          }
          else if(map[w][e] =='X' || w == n-1)
          {
            if(check>= 2)
              cnt ++;
            check = 0;
          }
        }
    }
  
  return cnt;
}



int main() 
{
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  for(int e = 0; e <n; ++e)
    {
      for(int w = 0; w <n; ++w)
        cin >> map[e][w];
      
    }

  cout << row(n) << " " << col(n);
    
  return 0;
  
}
