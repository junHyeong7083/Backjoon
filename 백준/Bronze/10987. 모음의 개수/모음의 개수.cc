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

  int cnt = 0;
  for(int e= 0; e < str.size(); ++e)
    {
      if(str[e] == 'a' || str[e] == 'e' || str[e] =='i' || str[e] =='o' || str[e]=='u')
    
    cnt ++;
    }
  cout << cnt;
  return 0;
  
}
