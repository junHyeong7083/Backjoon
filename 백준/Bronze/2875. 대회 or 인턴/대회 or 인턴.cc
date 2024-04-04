#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;


int main() 
{
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  // 2명여자 1명의 남자가 팀
  // k명이 빠졌ㅎ을때 만들 수 있는 최대 팀수
  int g,m,k;
  cin >> g>> m >> k;

  int mm = min(m, g/2);
  int res = min(mm, (g+m-k)/3);

  cout << res;
  
  return 0;
}
