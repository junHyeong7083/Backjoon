#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
  string str;
  getline(cin, str);
  int cnt = 0;
  bool can = false;
  for(int e = 0; e < str.length(); ++ e)
  {
    if (str[e] == 'U' && cnt == 0)
    {
      cnt++;
    }
    if (str[e] == 'C' && cnt == 1)
    {
      cnt++;
    }
    if (str[e] == 'P' && cnt == 2)
    {
      cnt++;
    }
    if (str[e] == 'C' && cnt == 3)
    {
      can = true;
    }

  }
  if (can)
    cout << "I love UCPC";
  else
    cout << "I hate UCPC";
  return 0;
}