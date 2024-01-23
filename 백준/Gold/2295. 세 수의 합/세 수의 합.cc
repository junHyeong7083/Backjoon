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
  vector<int> v(n);
  for(int e = 0; e < n; ++e)
    cin >> v[e];

  sort(v.begin(),v.end());
  vector<long long>sumv;
  for(int e = 0; e < n; ++e)
    {
      for(int q = e; q<n; ++q)
        {
          long long sum = v[e] + v[q];
          sumv.push_back(sum);
        }
    }
  sort(sumv.begin(), sumv.end());  
  /*
  x + y + z = a
  x + y = a - z;
  */
  long long res = 0;
  for(int e = 0; e < n; ++e)
    {
      for(int q = e+1; q < n; ++q)
        {
          if(binary_search(sumv.begin(), sumv.end(), v[q] - v[e]))
          {
            res = max(res, (long long)v[q]);
          }
        }
    }
    cout << res;
  return 0;
}
