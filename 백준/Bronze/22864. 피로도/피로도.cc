#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>
using namespace std;


int main() 
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a, b, c, m;
  cin >> a>> b>> c >> m;

  int time = 0;
  int check = 0;
  int work = 0;
  while(true)
  {
    if(time == 24)
      break;
    if(check+a <= m)
    {
      time ++;
      check += a;
      work += b;
    }
    else
    {
      time ++;
      check -= c;
      if(check < 0)
        check = 0;
    }
  }

  cout << work;
  
    return 0;
}
