#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<algorithm>
#include<math.h>
#include<list>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    
    cin >> n;
    int res = 1;
    for (int e = 1; e <= n; ++e)
    {
        res *= 2;
    }
    cout << res;

    return 0;
}