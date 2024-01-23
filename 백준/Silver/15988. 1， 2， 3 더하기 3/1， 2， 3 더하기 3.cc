#include <iostream>
#include<vector>
#include <algorithm>
#include <cmath>
using namespace std;

long long f[1000001] = { 0};
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >>t;
  while(t--)
    {
      int n;
      cin >> n;

      f[1] = 1;
      f[2] = 2;
      f[3] = 4;
      for(int e = 4; e<=n; ++e)
        {
          f[e] = (f[e-1] + f[e-2] +f[e-3])%1000000009;
        }
      
      
      cout << f[n] <<"\n";
    }

  return 0;
}
