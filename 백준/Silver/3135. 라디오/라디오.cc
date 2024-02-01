#include<iostream>
#include<map>
#include<string>
#include<stack>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    cin >> a >> b;
    // a현재 b 갈곳
    int n;
    cin >> n;
    vector<int>v(n);
    for (int e = 0; e < n; ++e)
        cin >> v[e];

    sort(v.begin(), v.end());

    int minv = abs(a-b);
    for (int e = 0; e < v.size(); ++e)
    {
        int diff =abs( v[e] - b)+1;
        minv = min(diff, minv);
    }

    cout << minv;

    return 0;
}    