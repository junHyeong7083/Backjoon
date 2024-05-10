#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<math.h>
using namespace  std;

int main()
{  
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int n;
  cin >> n;

  vector<pair<int,int>>v(n);

  for(int e = 0; e < n ; ++e)
    cin >> v[e].first >> v[e].second;

  sort(v.begin(),v.end());

  int res = 0;
  int l = -2000000000,r = -2000000000;
  for(int e = 0; e < n ; ++e)
    {
      if(v[e].first > r)
      {
        res += r-l;
        r = v[e].second;
        l = v[e].first;
      }
      else
        r = max(r, v[e].second);
    }
  res += r-l;
  cout << res;
  
  return 0;
}