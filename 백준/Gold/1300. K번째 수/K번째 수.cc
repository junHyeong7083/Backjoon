#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, k;
    cin >> n >> k;
    
    long long s = 1, e = n * n;
    while (s <= e)
    {
        long long m = (s + e) / 2; // 탐지원소값
        long long cnt = 0;

        for (int i = 1; i <= n; ++i)
        {
            cnt += min(m / i, n);
        }

        if (cnt < k)
            s = m + 1;
        else
            e = m - 1;
    }
    cout << e + 1;

    return 0;
}