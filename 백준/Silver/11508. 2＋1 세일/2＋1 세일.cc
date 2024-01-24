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
  for(int e = 0; e < n ; ++e)
    cin >> v[e];

  int cc = n/3;
  
  sort(v.begin(), v.end(),[](const auto&a, const auto&b){return a > b;});
  int sum = 0;
  for(int e = 0; e < v.size(); ++e)
    {
      if((e+1)%3 != 0)
        sum+= v[e];
    }

  cout << sum;
  return 0;
}
