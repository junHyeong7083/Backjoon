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

  long long n,m;
  cin >> n >>m;
  
  vector<int> v;
  
  for(int e = 0; e < n; ++e)
    {
      int x;
      cin >> x;
      v.push_back(x);
    }

  sort(v.begin(),v.end());
  
  long long start = 1;
  long long end =m*v.back();
  while(start <= end)
    {
      long long mid = (start+end)/2;
      long long sum = 0;
      for(int e=0; e< v.size(); ++e)
          {
            sum += mid/v[e];
            if(sum > m)
              break;
          }
        if(sum < m)
            start = mid  +1;
        else
           end = mid - 1;
      
    }
  cout << start;

  return 0;
}