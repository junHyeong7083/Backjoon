#include <iostream>
#include <deque>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
#define ULL unsigned long long

ULL gcd(ULL a, ULL b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}





int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int n;
    cin >> n;

    for (int e = 0; e < n; ++e)
    {
        ULL a, b;
        cin >> a >> b;

        cout << (a * b) / gcd(a, b) << "\n";
   }


    return 0;
}
