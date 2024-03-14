#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int N;

int main() 
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  cin >> N;
  vector<pair<int,int>> v(N);

    
  
  for (int e = 0; e < N; ++e)
    {
      int x ;
      cin >> x;
      v[e].first = x;
      v[e].second = e;

      //cout << "ve.first : " << x<< "  ve.second : " << e <<"\n";
    }

  sort(v.begin(), v.end());

  int res = 0;
  for(int e= 0; e < v.size(); ++e)
    {
     // cout <<"v[e] :  " << v[e].first <<"  e : " << v[e].second-e <<"\n";
      res = max(res, v[e].second - e);
    
    } 

  cout<<res+1;
  return 0;
}
