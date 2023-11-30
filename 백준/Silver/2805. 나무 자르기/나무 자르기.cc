#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  // 나무 m
  // 높이 h 지정
  // 높이가 h보다 큰 나무는 잘림
  vector<int> v; // 나무의 높이를 저장할 벡터
  int n, m; // n : 나무 개수, m 가져갈 높이
  long long maxtree = -111111;
  long long maxvalue = 0;
  cin >> n >>m;
  for(int e=0; e<n; e++)
    {
      int tree;
      cin >> tree;

      v.push_back(tree);
      if(maxvalue < tree)
          maxvalue = tree;
    }
  long long end = maxvalue;
  long long start = 0;

  while(start<= end)
    {
      long long sum = 0;
      long long mid = (start + end) / 2; // 자를 높이
      for(int e= 0; e< n; ++ e)
        {
          long long height = v[e] - mid;
          if(height > 0)
            sum +=height;
        }

      if(sum >= m)
      {
        start = mid + 1;
        maxtree = mid;
        
      } 
      else
        end = mid -1;
      
    }
  cout << maxtree;
  
}