#include <iostream>
#include<vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  vector<int>v(n+1),dp(n+1);
  for(int e = 1; e <= n ; ++e)
      cin >> v[e];

  for(int e = 1; e <=n; ++e)
    {
      for(int q = 1; q<e; ++q)
        {
          if(v[q] < v[e])
            dp[e] = max(dp[e],dp[q]);
        }
      dp[e]+= v[e];
    }

  sort(dp.begin(), dp.end());
  cout << dp.back();
  return 0;
}
