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

  string res = "";
  for(int e= 0; e < str.size(); ++e)
    {
      if(str[e]>='A' && str[e]<='Z')
        res += str[e];
    }
  
  cout << res;
  return 0;
  
}
