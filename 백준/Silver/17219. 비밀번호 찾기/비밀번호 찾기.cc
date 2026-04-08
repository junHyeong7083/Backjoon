#include <iostream>
#include <map>

using namespace std;

int main() {
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  map<string, string>sol;

  int N, M;
  cin >> N >> M;

  string link;
  string pass;
  while(N--) {
    cin >> link >> pass;
    sol.insert(make_pair(link, pass));
  }
  while(M--) {
    cin >> link;
    cout << sol[link] << "\n";
  }

  return 0;
}