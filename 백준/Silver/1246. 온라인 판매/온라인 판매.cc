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



  int n,m;
  cin >> n >> m;
  vector<int> v(m);
  for(int e = 0; e < m; ++e)
    cin >> v[e];

  sort(v.begin(),v.end(),[](const auto&a, const auto&b)
    {
      return a>b;
    });
  int cnt = 0;
  int index = 0;
  for(int e = 0; e <m && e<n; ++e)
    if(v[e]*(e+1) > cnt)
    {
      cnt = v[e]*(e+1);
      index= e;
    }

  cout << v[index] <<" " << cnt;
  
  return 0;
}
