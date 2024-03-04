#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;



int checkNum(const string&str)
{
  int sum = 0;
  for(char c: str)
    {
      if(isdigit(c))
      {
        sum += (c-'0');
      }
    }

  return sum;
}






bool Compare( string&a,  string&b)
{
  if(a.size() != b.size())
    return a.size() < b.size();
  else
  {
    int aa = checkNum(a);
    int bb= checkNum(b);
    if(aa != bb)
      return aa < bb;
    else
      return a < b;
  }
  
}



int main() 
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;

  vector<string> sv(n);
  for(int e = 0; e < n; ++e)
    cin >> sv[e];
  
  
  sort(sv.begin(), sv.end(), Compare);

  for(int e = 0; e < n; ++e)
    cout << sv[e] <<"\n";


    return 0;
}
