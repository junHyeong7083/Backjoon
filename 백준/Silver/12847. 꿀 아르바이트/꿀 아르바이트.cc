#include <iostream>
#include <vector>
#include <algorithm>
#include<cmath>
#include<deque>
#include<stack>
#include<queue>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;

    vector<int> v(n);
    
    for (int e = 0; e < n; ++e)
        cin >> v[e];
    

    long long aa = 0;
    for (int e = 0; e < m; ++e)
        aa += v[e];

    long long res = aa;

    for (int e = m; e < v.size(); ++e)
    {
        aa += v[e] - v[e - m];
        res = max(res, aa);
    }
    cout << res;
    return 0;
}
