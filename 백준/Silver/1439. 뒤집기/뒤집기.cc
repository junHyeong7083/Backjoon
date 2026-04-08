#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int main(void){
  string s;
  cin >> s;

  int cnt1 =0, cnt2 =0;
  for(int e =0; e< s.size(); ++e)
    {
      if(s[e] != s[e+1])
      {
        if(s[e] == '1')
          cnt1 ++;
        else 
          cnt2 ++;
      }
    }
  cout << min(cnt1, cnt2);

  return 0;
}