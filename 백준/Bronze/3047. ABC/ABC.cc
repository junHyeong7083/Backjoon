#include <iostream>
#include<algorithm>
#include <math.h>
using namespace std;

int main() {
  int arr[3] = {0};
  int maxv = 0, minv =100;

  for(int e= 0;e<3; ++e)
  {
      int input;
      cin >> input;
      arr[e] = input;
      maxv  = max(maxv, input);
      minv = min(minv,input);
   }
  int mid = 0;
  for(int e = 0; e<3; ++e)
    {
      if(arr[e] != maxv && arr[e] !=minv)
      {
        mid = arr[e];
      }
    }
  char s[256];
  cin >> s;
  for(int e = 0; e < 3; ++e)
    {
      if(s[e] == 'A')
        cout << minv;
      else if(s[e] == 'B')
        cout << mid;
      else if(s[e] == 'C')
        cout << maxv;

      cout << " ";
    }
  return 0;
}