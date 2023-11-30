#include <iostream>
#include<stack>
#include<vector>

using namespace std;

int main()
{
ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int n;
  cin >> n;
  stack<int>s;
  vector<char>v;

  int cnt = 1;
  for(int e= 0;e< n; ++e)
    {
    //  cout << "e : " << e << endl;
      int x;
      cin >> x;
    //  cout << "X : " << x << endl;
      while(cnt <= x)
        {
        //  cout << "cnt : " << cnt << endl;
          v.push_back('+');
          s.push(cnt);
          cnt++;
        }
      if(x == s.top())
      {
      //  cout << "s.top" << endl;
        s.pop();
        v.push_back('-');
      }
      else
      {
        cout << "NO";
        return 0;
      }
    }
    for(int e= 0; e < v.size(); ++e )
      cout << v[e] << "\n";
  

  return 0;
}

