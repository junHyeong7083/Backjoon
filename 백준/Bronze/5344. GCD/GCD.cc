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
        int a, b;
        cin >> a >> b;


        cout << gcd(a, b) << "\n";
        
    }

    return 0;
}
