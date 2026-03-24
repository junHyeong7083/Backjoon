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
    int startctn = 1 + (2 * (n - 1));
    for (int e = 0; e < n; e++)
    {
        for (int q = 0; q < e; ++q)
            cout << " ";

        for (int w = 0; w < startctn; w ++)
        {
            cout << "*";
        }
            
        cout << "\n";
        startctn -= 2;
    }
    startctn = 3;
    for (int e = n-1; e >0; --e)
    {
        for (int q = e - 1; q > 0; --q)
            cout << " ";

        for (int w = 0; w < startctn; ++w)
            cout << "*";

        cout << "\n";
        startctn += 2;
    }
}

int main()
{
    bootstrap();
    init();
    solve();
    return 0;
}