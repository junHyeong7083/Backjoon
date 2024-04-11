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

  int t;
  cin >> t;
  while(t--)
    {
      long long x, y;
      cin >> x >> y;

      double dis = y- x;

      // 1 2 3 ... 3 2 1
      double sdis = sqrt(dis);
      int rdis = round(sdis);

      if(sdis <= rdis)
        cout << 2*rdis-1 << "\n";
      else
        cout << 2*rdis << "\n";
        
      
    
  }
 
  return 0;
}
