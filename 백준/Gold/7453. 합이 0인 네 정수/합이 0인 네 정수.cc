#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  
  int n;
  cin >> n;
  vector<long long>a(n),b(n),c(n), d(n);
  for(int e = 0; e < n ; ++e)
  {
    cin >> a[e] >> b[e] >> c[e] >> d[e];
  }   

  vector<long long>ab, cd;
  for(int e = 0; e<n; ++e)
  {
    for(int q =0; q<n; ++q)
    {
      long long sum1 = a[e] +b[q];
      long long sum2 = c[e] +d[q];
      ab.push_back(sum1);
      cd.push_back(sum2);
    }
  }

  sort(ab.begin(), ab.end());
  sort(cd.begin(), cd.end());
  
  long long cnt = 0;
  for(int e = 0; e < ab.size(); ++e)
    {
      int l = lower_bound(cd.begin(),cd.end(), -ab[e]) - cd.begin();
      int r = upper_bound(cd.begin(),cd.end(), -ab[e]) - cd.begin();

      cnt += (r-l);
    }

  cout <<cnt;
    return 0;
}
