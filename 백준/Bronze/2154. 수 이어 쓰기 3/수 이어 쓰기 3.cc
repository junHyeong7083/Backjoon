#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include<string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string str  = "";

    for (int e = 1; e <= n; ++e)
        str += to_string(e);

    int idx = str.find(to_string(n));

    cout << idx + 1;
    return 0;
}
