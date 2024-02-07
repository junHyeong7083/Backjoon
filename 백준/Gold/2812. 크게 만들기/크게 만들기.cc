#include<iostream>
#include<vector>
#include<algorithm>
#include <string>
#include <queue>
#include <stack>
using namespace std;



string FindRes(int n, int k, const string& str)
{
  stack<char> st;
  for(char ch : str)
    {
      while(k > 0 && !st.empty() && st.top() < ch)
        {
          st.pop();
          k--;
        }
      st.push(ch);
    }


  string res;
  while(!st.empty())
    {
      res += st.top();
      st.pop();
    }

  res.erase(res.begin(), res.begin() + k);
  
  return res;
}




int main()
{

  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n,k;
  cin >> n >> k;
  string str;
  cin >> str;

  string res = FindRes(n,k,str);
  
  reverse(res.begin(), res.end());
  cout << res;


  return 0;
}