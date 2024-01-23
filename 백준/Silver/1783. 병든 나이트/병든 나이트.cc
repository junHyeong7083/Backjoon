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

  int n,m;
  cin >> n>> m;
  if(n==1)
    cout << 1;
  else if(n==2)
    cout << min(4,(m+1)/2) << endl;
  else if(n >= 3)
  {
    if(m<=6)
      cout << min(m,4) << endl;
    else
      cout << m-2 << endl;
  }
  return 0;
}
