#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main() 
{
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  queue<int>qu;

  for(int i = 1; i <=n; ++i)
    qu.push(i);
   for(int t = 1; t<= n-1; ++t)
    {
      long long powt = pow(t,3); 
      powt --;
      powt %= (n-t+1);
      while(powt--)
        {
          qu.push(qu.front());
          qu.pop();
        }
      qu.pop();
    }
  cout << qu.front();
  return 0;
  
}
