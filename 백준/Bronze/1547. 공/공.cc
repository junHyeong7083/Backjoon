#include <iostream>
#include<vector>
using namespace std;
int main() {
  int n, a, b, check = 1;
  cin >> n;
  for(int i=0; i<n; i++) {
      int a, b;
      cin >> a>> b;
      if(check == a) check = b;
      else if(check == b) check = a;
  }
  cout << check;
}