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

  /*
  c < a + b
  */
  int n;
  cin >> n;
  vector<int>v(n);
  for(int e = 0; e < n; ++e)
    cin >> v[e];

  sort(v.begin(), v.end(),[](const auto&a, const auto&b)
    {
      return a > b;
    });
  bool isTriangle = false;
  int res = 0;
  for (int i = 0; i < n - 2; ++i) 
  {
      if (v[i] < v[i + 1] + v[i + 2]) 
      {
          res = v[i] + v[i + 1] + v[i + 2];
          isTriangle = true;
          break;
      }
  }
  if(isTriangle)
  {
    cout << res;
  }
  else
    cout <<-1;
  
  return 0;
}
