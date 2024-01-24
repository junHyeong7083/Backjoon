#include <iostream>
#include<vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n,k;
  cin >> n >> k;
  if(k == 1 || n < (k*(k+1)/ 2))
  {
    cout << -1;
  }
  else
  {
    n-= (k*(k+1))/2;
    n%=k;
    if(n==0)
      cout << k-1;
    else
      cout << k;
   
  }
  
  
  return 0;
}
