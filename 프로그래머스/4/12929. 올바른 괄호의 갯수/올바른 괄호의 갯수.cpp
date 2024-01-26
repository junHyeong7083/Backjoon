#include <string>
#include <vector>

using namespace std;

long long f[15] = { 0};
long long dp(int n)
{
    f[0] = 1;
    f[1] = 1;
    f[2] = 2;
    f[3] = 5;
   
    for(int i =4; i<=n; ++i)
    {
        for(int j = 0; j < i; ++j)
            f[i] += f[j] * f[i-j-1];
    }
    return f[n];
}

int solution(int n) {
    return dp(n);
}