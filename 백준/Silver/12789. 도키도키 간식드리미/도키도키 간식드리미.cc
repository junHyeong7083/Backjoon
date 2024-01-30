#include<iostream>
#include<vector>
#include<algorithm>
#include <string>
#include <stack>
#include <queue>
using namespace std;



int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  vector<int> v(n);
  stack<int>st;
  queue<int>qu;
  for(int i = 0; i < n; ++i)
    {
       cin >> v[i];
       qu.push(v[i]);
    }

  int check = 1;
  vector<int>resv;

  while(!qu.empty())
  {
    if(qu.front() == check)
    {
      resv.push_back(qu.front());
      qu.pop();
      check ++;
      
    }
    // 아래에 들어간 애들중 젤 위(st.top)도 체크
    else if(!st.empty() && st.top() == check)
    {
      resv.push_back(st.top());
      st.pop();
      check++;
    }
    else 
    {
      st.push(qu.front());
      qu.pop();
    }
  }

  while(!st.empty())
    {
      resv.push_back(st.top());
      st.pop();
    }

  bool isPossible = true;
  for(int i = 0; i < resv.size()-1; ++i)
    {
      if(resv[i] > resv[i+1])
      {
        isPossible=false;
        break;   
      }
    }
  if(isPossible)
    cout <<"Nice";
  else
    cout << "Sad";
  
  return 0;
}