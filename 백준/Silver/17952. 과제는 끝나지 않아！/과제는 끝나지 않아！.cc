#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>
using namespace std;


int main() 
{
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  stack<pair<int,int>> st;
  int res = 0;
  while(n--)
    {
      int cmd;
      cin >> cmd;
      
      if(cmd)
      {
        int score, time;
        cin >> score >> time;

        st.push(make_pair(score, time));
      }

      if(!st.empty())
      {
         st.top().second--;
        if(!st.top().second)
        {
          res += st.top().first;
          st.pop();
        }
      }

    }
  

  cout << res;

  return 0;
}
