#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>
using namespace std;


int main() 
{
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  /*
  1~9 그냥
  l->r
  s->k
  */
  stack<char>skill1;
  stack<char>skill2;
  int n;
  cin >> n;
  string str;
  cin >> str;

  int cnt = 0;

  for(int e= 0; e < str.size(); ++e)
  {
    if(str[e] >='1' && str[e] <='9')
      cnt ++;
    else if(str[e] == 'L')
      skill1.push(str[e]);
    else if(str[e] == 'S')
      skill2.push(str[e]);
    else if(str[e] =='R')
    {
      if(skill1.empty())
        break;
      else
      {
        skill1.pop();
        cnt++;
      }
    }
    else
    {
      if(skill2.empty())
        break;
      else
      {
        skill2.pop();
        cnt++;
      }
    }
    
      

    
  }
  cout << cnt;
  
  
  return 0;
}
