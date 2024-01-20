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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int e = 0; e < n; ++e)
        cin >> v[e];
    sort(v.begin(), v.end(), [](const int& a, const int& b)
        {
            return a > b;
        });

    long long cnt = 0;
    for (int e = 0; e < v.size(); ++e)
    {
        cnt +=max(0, v[e] -(e+1 - 1));
    }
    cout << cnt ;

    return 0;
}