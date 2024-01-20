#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<utility>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    std::cout.tie(NULL);

    /*
    나무수 n
    나무 자라는데 걸리는 시간 t

    */

    int n;
    cin >> n;
    vector<int> v(n);
    for (int e = 0; e < n; ++e)
        cin >> v[e];
    sort(v.begin(), v.end(), [](const int& a, const int& b)
        {
            return a > b;
        });

    int cnt = 0;
    for (int e = 0; e < v.size(); ++e)
    {
        cnt = max(cnt, v[e] + e);
    }
    cout << cnt + 2;

    return 0;
}