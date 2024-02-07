#include<iostream>
#include<vector>
#include<algorithm>
#include <string>
#include <queue>
#include <stack>
using namespace std;



int main()
{

  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  /*
  도로위에 n개의 센서
  예산상의 문제로 k개의 집중국 가능

  n개의 센서가 하나의 집중국과는 통신가능
  각 집중국의 수신가능 영역의 길이의 합을 최소

  고속도로는 직선
  */
  int n,k;
  cin >> n >> k;

  vector<int> v(n);
  for(int e = 0; e < n ; ++e)
    cin >> v[e];

  
  sort(v.begin(), v.end());
  // 1  3 6 6 7 9
  //   2     7
  vector<int> diff(n);
  
  
  for(int e = 1; e<n; ++e)
    {
      diff[e-1] = v[e] - v[e-1];
    }
  // 2 3 0 1 2
  sort(diff.begin(), diff.end());
  
  int res = 0;
  for(int e = 0; e <n-k+1; ++e)
    res += diff[e];

  cout << res;
  return 0;
}