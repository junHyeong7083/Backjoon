#include <iostream>
#include<vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <set>
#include <map>

using namespace std;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while(t--)
    {
      int n;
      cin >> n;
      vector<int> v1;
      for(int e = 0; e < n ; ++e)
        {
          int x;
          cin >>x;
          v1.push_back(x);
        }

      int m;
      cin >> m;
      vector<int>v2;
      for(int e = 0; e < m; ++e)
        {
          int x;
          cin >> x;
          v2.push_back(x);
        }
      sort(v1.begin(), v1.end());
      for(int e = 0; e < m; ++e)
        {
          if(binary_search(v1.begin(), v1.end(), v2[e]))
            cout<<"1\n"; 
          else
            cout <<"0\n";
        }
  
    }
  
  
  
  return 0;
}