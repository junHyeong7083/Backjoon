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

  string str;
  cin >> str;

  stack<char>st;

  int res = 0;
  for(int e= 0; e < str.size(); ++e)
    {
      if(st.empty() && str[e] ==')')
        res++;
      else if(str[e] =='(')
        st.push(str[e]);
      else if(!st.empty() && str[e] ==')')
        st.pop();
    }

  cout << res + st.size();
  return 0;
}
