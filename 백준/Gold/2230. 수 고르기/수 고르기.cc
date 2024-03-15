#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> v(n);

    for (int e = 0; e < n; ++e)
    {
        cin >> v[e];
    }

    sort(v.begin(), v.end());
    int left = 0, right = 0;
    int res = 2000000001; 

    while (right < n && left<n) 
    {
        int diff = v[right] - v[left];
        if (diff >= m)
        {
            res = min(res, diff);
            left++; 
        }
        else 
            right++;
    }

    cout << res;
    return 0;
}
