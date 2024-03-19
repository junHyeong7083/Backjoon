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


    int n;
    cin >> n;

    vector<int>v(n);

    for (int e = 0; e < n; ++e)
        cin >> v[e];

    for (int e = 1; e < v.size(); ++e)
    {
        cout << v[0] / gcd(v[0], v[e]) << "/" << v[e] / gcd(v[0], v[e]) << "\n";
    }
    

    return 0;
}
