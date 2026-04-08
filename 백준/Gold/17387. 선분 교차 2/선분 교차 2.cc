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
    cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
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
    int r1 = ccw(X1, Y1, X2, Y2, X3, Y3);
    int r2 = ccw(X1, Y1, X2, Y2, X4, Y4);

    int r3 = ccw(X3, Y3, X4, Y4, X1, Y1);
    int r4 = ccw(X3, Y3, X4, Y4, X2, Y2);

 
    if (r1 * r2 == 0 && r3 * r4 == 0)
    {
        if (make_pair(X1, Y1) > make_pair(X2, Y2))
            swap(X1, X2), swap(Y1, Y2);

        if (make_pair(X3, Y3) > make_pair(X4, Y4))
            swap(X3, X4), swap(Y3, Y4);

        if (make_pair(X1, Y1) <= make_pair(X4, Y4) &&
            make_pair(X3, Y3) <= make_pair(X2, Y2))
            cout << "1";
        else
            cout << "0";
    }
    else
    {
        if (r1 * r2 <= 0 && r3 * r4 <= 0)
            cout << "1";
        else
            cout << "0";
    }
}

int main() 
{
    bootstrap();
    init();
    solve();

    return 0;
}