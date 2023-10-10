#include <iostream>
#include <vector>
#include<map>
#include<math.h>
using namespace std;

/*
3,7,17,41
dp[N]=dp[N-1]*2 + dp[N-2]


*/
long long int f[100001] = { 0 };
int dp(int n)
{
    f[1] = 3;
    f[2] = 7;
    f[3] = 17;
    f[4] = 41;
    for (int e = 5; e <= n; ++e)
    {
        f[e] = f[e - 1] * 2 + f[e - 2];
        f[e] %= 9901;
    }


    cout << f[n];

    return 0;
}



int main()
{
    ios::sync_with_stdio(0);
    cout.tie(NULL);
    cin.tie(NULL);
  
    int n;
    cin >> n;

    dp(n);
}