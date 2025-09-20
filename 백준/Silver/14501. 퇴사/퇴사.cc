#include<iostream>
#include<cmath>
using namespace std;

int t[1001], p[1001];
int dp[1001];
int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> t[i] >> p[i];

    for (int i = n; i >= 1; --i)
    {
        // 퇴사일 초과안하는 경우
        if (i + t[i] <= n + 1)
        {
            dp[i] = max(dp[i+1], p[i] + dp[i + t[i]]);
        }
        else
            dp[i] = dp[i + 1];
    }

    cout << dp[1];
  

    return 0;
}
