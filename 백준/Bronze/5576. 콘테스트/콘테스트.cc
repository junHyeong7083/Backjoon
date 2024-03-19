#include <iostream>
#include <deque>
#include<cmath>
#include<algorithm>
#include<queue>
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

    vector<int>w(10);
    vector<int>k(10);

    for (int e = 0; e < 10; ++e)
        cin >> w[e];
    for (int e = 0; e < 10; ++e)
        cin >> k[e];

    sort(w.begin(), w.end(), [](const auto& a, const auto& b)
        {
            return a > b;
        });
    sort(k.begin(), k.end(), [](const auto& a, const auto& b)
        {
            return a > b;
        });

    int resw = 0, resk = 0;
    for (int e = 0; e < 3; ++e)
    {
        resw += w[e];
        resk += k[e];
    }

    cout << resw << " " << resk;

    return 0;
}
