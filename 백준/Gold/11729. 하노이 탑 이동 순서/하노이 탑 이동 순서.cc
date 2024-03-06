#include <algorithm>
#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

void Hanoi(int n, int start, int mid, int end) {
  if (n == 1) {
    cout << start << " " << end << "\n";
    return;
  } else {
    Hanoi(n - 1, start, end, mid);
    cout << start << " " << end << "\n";
    Hanoi(n - 1, mid, start, end);
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;

  cout << (1 << n) - 1 << "\n";
  Hanoi(n, 1, 2, 3);

  return 0;
}