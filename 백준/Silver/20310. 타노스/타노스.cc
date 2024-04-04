#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;


int main() 
{
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  string str;
  cin >> str;

  int zeroCnt = 0, oneCnt = 0;

  for(int e = 0; e < str.size(); e++)
    {
      if(str[e] == '0')
        zeroCnt++;
      else
        oneCnt++; 
    }
  // 앞에서 1부터, 뒤에서 0부터
  zeroCnt /= 2;
  oneCnt /= 2;
  string s1 = "";
  for(int e= 0; e < str.size(); ++e)
    {
      if(oneCnt>0)
      {
        if(str[e] == '1')
        {
          oneCnt--;
        }
        else
          s1 += str[e];
      }
      else   
        s1 += str[e];


    }
  string s2 = "";
  for(int e= s1.size()-1; e >= 0; --e)
  {
    if(zeroCnt>0)
    {
      if(s1[e] == '0')
      {
        zeroCnt--;
      }
      else 
        s2 += s1[e];
    }
    else
      s2 += s1[e];
  }
  reverse(s2.begin(), s2.end());
  cout << s2;
  
  return 0;
}
