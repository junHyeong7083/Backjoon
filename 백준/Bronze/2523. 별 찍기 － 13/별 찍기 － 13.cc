#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int n;
void bootstrap()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void init()
{
    cin >> n;
}

void solve()
{
    // start ctn = 1+(2*(n-1))
    for (int e = 0; e < n; e++)
    {
        for (int w = 0; w <= e; w ++)
        {
            cout << "*";
        }
            
        cout << "\n";
    }
    for (int e = n-1; e >0; --e)
    {
        for (int w = e; w > 0; --w)
            cout << "*";
        cout << "\n";
    }
}

int main()
{
    bootstrap();
    init();
    solve();
    return 0;
}