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

  int n,m;
  cin >> n >> m;
  vector<int>box(n);
  vector<int>book(m);

  int total = 0;
  for(int e = 0; e < n ; ++ e)
    {
      cin >> box[e];
      total += box[e];
    }
  for(int e = 0; e < m ; ++ e)
    cin >> book[e];

  int sum = 0;
  int boxidx = 0, bookidx =0;
  while(bookidx < m  && boxidx < n)
    {
      if(box[boxidx] >= book[bookidx])
      {
        sum += book[bookidx];
        bookidx++;
      }
      else
        boxidx++;
    }
  cout << total - sum;
  return 0;
}