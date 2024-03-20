#include <iostream>
#include <deque>
#include<cmath>
#include<algorithm>
#include<queue>
#include<vector>
#include<map>
using namespace std;


int gcd(int a, int b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}

map<int, int> check;
bool cmp(pair<int,int>&p1, pair<int,int>&p2)
{
    if (p1.second == p2.second)
        return check[p1.first] < check[p2.first];
    else
        return p1.second > p2.second;
}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, c;
    cin >> n >> c;
    
    map<int, int> m;
    for (int e = 0; e < n; ++e)
    {
        int x;
        cin >> x;
        m[x]++;

        if (!check[x])
            check[x] = e + 1;
    }

    vector<pair<int, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), cmp);

    for (int e = 0; e < v.size(); ++e)
    {
        for (int w = 0; w < v[e].second; ++w)
            cout << v[e].first << " ";
    }

    
    return 0;
}
