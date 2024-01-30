#include<iostream>
#include<vector>
#include<algorithm>
#include <string>
#include<map>
using namespace std;

map<string,int> m;
map<string,int>::iterator iter;


void Reset()
{
  m.clear();
}




int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  /*
  enter나왓을때 리셋
  아닐때 처음입력만 +1
  */

  int t;
  cin >>t;
  int cnt = 0;
  while(t--)
    {
      string str;
      cin >> str;

      if(str != "ENTER")
      {
        if(m.find(str) == m.end())
        {
          m[str] = 1;
          cnt++;
        }
      }
      else
      {
        Reset();
      }
    }
  
  cout << cnt;

  return 0;
}