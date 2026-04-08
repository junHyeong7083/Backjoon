#include<iostream>
#include<cmath>
using namespace std;

long long dp[10001];
int a[10001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i];

    if (n >= 1) dp[1] = a[1];
    if (n >= 2) dp[2] = a[1] + a[2];

    for (int i = 3; i <= n; ++i) 
    {
        dp[i] = max( dp[i - 1],max( dp[i - 2] + a[i], dp[i - 3] + a[i - 1] + a[i] ));
    }

    cout << dp[n] << '\n';

    return 0;
}
