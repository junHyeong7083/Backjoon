#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long int f[81] = {0};
void dp(int n )
{
  f[1] = 4;
  f[2] = 6;
  f[3] = 10;
  f[4] = 16;

  for(int e =5 ; e<=n; ++e)
    {
      f[e] = f[e-1] + f[e-2];
    }
  cout << f[n];
  
}



int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  dp(n);  
  return 0;
}