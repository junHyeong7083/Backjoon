#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool Cmp(pair<int,int>&p1, pair<int,int>&p2)
{
  return p1.first < p2.first;
}



int main() 
{
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  vector<pair<int,int>>v(n);

  for(int e= 0; e <n; ++e)
    cin >> v[e].first >> v[e].second;

  sort(v.begin(), v.end(), Cmp);

  int res = 0;
  for(int e= 0; e <n; ++e)
    {
      if(res < v[e].first)
      {
        res = v[e].first;
      }

      res += v[e].second;
    }
  cout << res;

  return 0;
}
