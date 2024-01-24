#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  string str;
  getline(cin,str);

  string check;
  getline(cin,check);

  int cnt1 = 0;
  int idx =0;
  for(int e = 0; e < str.size(); ++e)
    {
      if(str[e] == check[idx])
      {
        idx++;
        if(idx == check.size())
        {
          cnt1 ++;
          idx = 0;
        } 
      }
      else
      {    
        idx = 0;
        if(str[e] == check[idx]) 
            idx++;
      }
    }

  reverse(str.begin(), str.end());
  reverse(check.begin(),check.end());
  int cnt2 = 0;
  idx = 0;
  for(int e = 0; e < str.size(); ++e)
  {
    if(str[e] == check[idx])
    {
      idx++;
      if(idx == check.size())
      {
        cnt2 ++;
        idx = 0;
      } 
    }
    else
    {    
      idx = 0;
      if(str[e] == check[idx]) 
          idx++;
    }
  }

  
  if(cnt1 == cnt2)
    cout << cnt1;
  else
    cout << max(cnt1, cnt2);
  
  
  return 0;
}