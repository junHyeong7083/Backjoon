#include <iostream>
#include<algorithm>
#include <math.h>
#include<vector>

using namespace std;

int main() {

  int t;
  cin >> t;
  while(t--)
    {
      vector<int> v;
      for(int e = 0; e < 7; ++e)
        {
          int input;
          cin >> input;
          v.push_back(input);
        }
      int s = 0, minv = 0;
      bool isCheck = false;
      sort(v.begin(), v.end());

      
      
      for(int e = 0; e < 7; ++e)
      {
       if(v[e] %2 == 0)
       {
         s += v[e];
         if(!isCheck)
         {
           minv = v[e];
           isCheck = true;
         }
       }
      }
      cout << s << " " << minv<< endl;
    }
  
  return 0;
}