#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  int N;
  cin >> N;

  vector<int> v(N+1);
  for(int i = 1; i <= N; ++i)
  {
    cin >> v[i];
  }

  vector<long long>sum(N+1);
  for(int i = 1; i<=N; ++i)
    {
      sum[i] = sum[i-1] + v[i];
    }

  long long res = 0;
  for(int i = 2; i <N; ++i)
    {
      res = max(res,2*sum[N]-v[1]-v[i]-sum[i]);
      res = max(res, sum[N-1]-v[i]+sum[i-1]);
      res = max(res,sum[i]-v[1]+sum[N-1]-sum[i-1]);
    }

  cout << res;
  return 0;
}
