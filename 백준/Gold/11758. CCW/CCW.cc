#include <iostream>
#include <algorithm>

using namespace std;
typedef long long ll;

ll X1, Y1, X2, Y2, X3, Y3, X4, Y4;

void bootstrap() 
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}

void init() 
{
    cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3;
}

int ccw(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3) 
{
    ll cal = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);
    if (cal > 0) return 1;
    else if (cal < 0) return -1;
    else return 0;
}
void solve()
{
    cout << ccw(X1, Y1, X2, Y2, X3, Y3);
}

int main() 
{
    bootstrap();
    init();
    solve();

    return 0;
}