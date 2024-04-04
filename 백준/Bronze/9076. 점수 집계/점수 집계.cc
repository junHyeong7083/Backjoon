#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main() 
{
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while(t--)
    {
      vector<int>v(5);

      for(int e = 0; e < 5;++e)
        cin >> v[e];

      sort(v.begin(), v.end());

      int sum = v[1] + v[2] + v[3];

      int check = v[3] - v[1];

      if(check >= 4)
        cout <<"KIN\n";
      else
        cout << sum << "\n";
    }

  return 0;
}
