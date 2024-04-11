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

  int res = 10;
  char pre = str[0];
  for(int e= 1; e < str.size(); ++e)
    {
      if(str[e] != pre)
        res += 10;
      else
        res +=5;
      pre = str[e];
    }
  cout << res;
  return 0;
  
}
