#include <iostream>
#include<algorithm>
#include <math.h>
#include<vector>
#include<string>

using namespace std;

string stringsum(string a, string b)
{
  string result;
  int cc = 0;
  int num = 0;
  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());

  while(a.length() < b.length())
    a += '0';
  while(b.length() < a.length())
    b += '0';

  for (int i = 0; i < a.length(); ++i) {
    num = (a[i] - '0' + b[i] - '0' + cc) % 10;
    result += to_string(num);
    cc = (a[i] - '0' + b[i] - '0' + cc) / 10;
  }
  if (cc!= 0) {
    result += to_string(cc);
  }

  reverse(result.begin(), result.end());

  return result;
}

string sol(int n)
{
  string a,b,res;

  a ="1";
  b = "1";
  
  for(int e = 3; e <= n; ++e)
    {
      res = stringsum(a,  b);
      a = b;
      b = res;
    }
  return b;
}



int main() {
 int n;
  cin >> n;
  cout << sol(n);
  
  return 0;
}