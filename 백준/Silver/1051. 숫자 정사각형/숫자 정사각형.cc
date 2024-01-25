#include<iostream>
#include<vector>
#include<cmath>
using namespace std;


int arr[51][51] = {  { 0 } };
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m;
  cin >> n >>m;

  for(int e = 0; e < n ; ++e)
    {
      string input;
      cin >> input;
      for(int q = 0; q < input.size(); ++q)
        {
          arr[e][q] = input[q] - '0';
        }
    }
  
  bool isMatch = false;
  int ans = 0;
  for(int e = 0; e < n ; ++e)
  {  
    for(int q = 0; q < m; ++q)
    {
      int idx =1;
      while(idx +q <m && idx +e < n)
        {
          if (arr[e][q] == arr[e][q + idx] && arr[e][q] == arr[e + idx][q] && arr[e][q] == arr[e + idx][q + idx])
          {
            isMatch = true;
            ans = max(ans,idx);
          }
          
          idx++;
        }
      
    }
  }

  if(isMatch)
    cout << pow(ans+1, 2);
  else
    cout << "1";
  
  
  return 0;
}
