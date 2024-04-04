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

  string str1, str2;

  cin >> str1 >> str2;
  
  vector<char>sv1(27,0), sv2(27,0);
  int res = 0;

  for(int e = 0; e < str1.size(); e++)
    sv1[str1[e] - 'a']++;
  for(int e = 0; e < str2.size(); e++)
    sv2[str2[e] - 'a']++;


  // dared , bread
  // 
  

  
  for(int e = 0; e < 26; e++)
    {
      if(sv1[e] == 0 && sv2[e] >0 )
        res += sv2[e];
      else if(sv1[e] >0 && sv2[e] == 0)
        res += sv1[e];
      else if(sv1[e] > 0 && sv2[e] > 0) 
        res += abs(sv1[e] - sv2[e]);
    }

  cout << res;

  return 0;
}
