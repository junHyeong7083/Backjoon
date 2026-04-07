#include<vector>
#include<iostream>
#include<string>
#include<algorithm>
#include<utility>
#include<cmath>
#include<queue>
#include<iomanip> 

using namespace std;

typedef long long ll;

int n;
vector<pair<ll, ll>> v; 

void bootstrap()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}

void init()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        ll x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
}

ll _plus()
{
    ll value = 0;
    for (int i = 0; i < n; ++i)
    {
        if (i == n - 1)
            value += v[i].first * v.front().second;
        else
            value += v[i].first * v[i + 1].second;
    }
    return value;
}

ll _minus()
{
    ll value = 0;
    for (int i = 0; i < n; ++i)
    {
        if (i == n - 1)
            value += v[i].second * v.front().first;
        else
            value += v[i].second * v[i + 1].first;
    }
    return value;
}

void solve()
{
    ll front = _plus();
    ll second = _minus();
    ll diff = (front > second) ? (front - second) : (second - front);

    cout << fixed << setprecision(1);
    cout << (double)diff * 0.5;
}

int main()
{
    bootstrap();
    init();
    solve();

    return 0;
}