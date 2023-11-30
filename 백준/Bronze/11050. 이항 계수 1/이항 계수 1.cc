#include <iostream>
#include<stack>
#include<vector>

using namespace std;
int fac(int value)
{
  int sum = 1;
  for(int e = 1; e <= value; ++e)
    {
      sum *= e;
    }

  return sum;
}



int main()
{
ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
 int n,k;
  cin >> n >> k;
  // 이항계수 ( n  | k )
  //= nCk = n! / (n-k)!k!

  int res = fac(n) /(fac(n-k)*fac(k));
  cout << res;
  return 0;
}

