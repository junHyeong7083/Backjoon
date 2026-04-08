#include <iostream>
#include<algorithm>
#include <math.h>
#include<vector>
#include<string>

using namespace std;
int main()
{
  int x1,y1,r1, x2,y2,r2;
  int t;
  cin >> t;
  while(t--)
    {
      cin >> x1 >> y1 >>r1>>x2>>y2>> r2;
      int sum = r1 + r2;
      int sub = abs(r1-r2);
      double dis = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));	

      if(dis ==0 && r1 ==r2)
        cout << "-1" << endl;
      else if(dis == sum || dis == sub)
        cout <<"1" << endl;
      else if(sub < dis && dis < sum)
        cout <<"2" << endl;
      else
        cout << "0" << endl;
    }


  return 0;
}
