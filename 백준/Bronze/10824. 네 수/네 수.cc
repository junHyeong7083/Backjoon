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

  string s1,s2, s3,s4;
  cin >> s1 >> s2 >> s3 >> s4;

  string aa = s1+s2;
  string bb= s3 +s4;
  long long  res = stoll(aa) + stoll(bb);

  cout << res;
  return 0;
  
}
