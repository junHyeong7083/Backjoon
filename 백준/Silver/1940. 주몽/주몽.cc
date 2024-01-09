#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int arr[15001] = {0};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m;
  cin >> n >> m;

  for(int e = 0; e < n ; ++ e)
    cin >> arr[e];

  sort(arr, arr + n);
  int start = 0, end = n-1, cnt = 0;
  while(start < end)
    {
      if(arr[start] + arr[end] == m)
      {
        cnt ++; 
        start++;
        end --;
      } 
      else if(arr[start] + arr[end] < m)
        start++;
      else
        end --;
      
    }
  cout << cnt;
  return 0;
}
