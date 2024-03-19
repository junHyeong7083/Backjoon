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


    // 2 4 6
    // check ; 2
    // 4/2 
    // 4 6 6 
    vector<int>nv;

    for (int e = 1; e < n; ++e)
    {
        nv.push_back(v[e] - v[e - 1]);
    }
    int check = nv.front();

    for (int e = 1; e < nv.size(); ++e)
    {
        check = gcd(check, nv[e]);
    }
   
    int  res = 0;

    for (int e = 0; e < v.size()-1; ++e)
    {
        res += (v[e+1] - v[e]) / check-1;
    }

    cout << res;

    return 0;
}
