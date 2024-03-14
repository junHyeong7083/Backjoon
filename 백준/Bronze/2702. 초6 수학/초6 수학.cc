#include <string>
#include <algorithm>
#include <vector>
#include <iostream>
#include <queue>
#include <cmath>
#include <stack>
#include <deque>

using namespace std;

int gcd(int a, int b)
{
    int tmp;
    while (b != 0)
    {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << lcm(a, b) << " " << gcd(a, b) << "\n";
    }
    return 0;
}
