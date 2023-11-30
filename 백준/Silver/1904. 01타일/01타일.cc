#include <iostream>
using namespace std;

int f[1000001];

void dp(int n)
{
  f[1] = 1;
  f[2] = 2;
  for(int e = 3; e<= n; ++e)
    {
      f[e] = (f[e-1] + f[e-2])% 15746;
    }
  cout << f[n] ;
}




int main()
{
  int n;
  cin >> n ;
  dp(n);

      return 0;
  }
