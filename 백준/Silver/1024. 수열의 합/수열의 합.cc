#include <iostream>
using namespace std;

int main()
{
  int N, L;
      cin >> N >> L;
      int start = -1, count = 0;

      for(int i = L; i <= 100; i++) {
          int t = i * (i - 1) / 2;

          if((N - t) % i == 0 && (N - t) / i >= 0) {
              start = (N - t) / i;
              count = i;
              break;
          }
      }

      if(start < 0) {
        cout << "-1";
          return 0;
      }
      for(int i = 0; i < count; i++) {
         cout << start +i << " ";
      }
      return 0;
  }
