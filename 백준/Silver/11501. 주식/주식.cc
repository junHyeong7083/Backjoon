#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
  
    /*
    테스트 케이스 : t
    날수를 나타내는 n
    n개의 주가
    */
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int e = 0; e < n; ++e)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int maxv = -100000;
        long long ans = 0;
        for (int e = n - 1; e >= 0; e--)
        {
            if (maxv > v[e])
            {
                ans += (maxv - v[e]);
            }
            else
                maxv = v[e];
        }
        cout << ans << endl;
    }
  
    return 0;
}
