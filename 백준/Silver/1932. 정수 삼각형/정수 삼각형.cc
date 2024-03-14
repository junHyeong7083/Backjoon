#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int triangle[555][555];
int main() 
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >>n;

  /*
  아래에서 위로 하는게 편할듯
  */
    

  for(int e = 1; e<=n; ++e)
    {
      for(int j = 1; j <=e; ++j)
        cin >> triangle[e][j];
    }

  for(int e = n-1; e>=1; --e)
    {
      for(int j = 1; j <=e; ++j)
        {
           triangle[e][j] += max(triangle[e+1][j], triangle[e+1][j+1]);
        }
        
    }
  cout << triangle[1][1] << '\n';

  return 0;
}
