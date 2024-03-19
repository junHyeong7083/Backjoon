#include <iostream>
#include <deque>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;


int gcd(int a, int b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}





int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int>v(n);

        for (int e = 0; e < n; ++e)
            cin >> v[e];
        long long res = 0;
        for (int e = 0; e < v.size(); ++e)
        {
            for (int w = e + 1; w < v.size(); ++w)
            {
                res += gcd(v[e], v[w]);
            }
        }

        cout << res << "\n";
    }

    return 0;
}
