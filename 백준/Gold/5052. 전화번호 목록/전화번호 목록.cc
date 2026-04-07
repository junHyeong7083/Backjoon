#include<vector>
#include<iostream>
#include<string>
#include<algorithm>
#include<utility>
#include<queue>
using namespace std;

int t, n;
vector<string>v;
void bootstrap()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}
void solve()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        v.resize(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];

        sort(v.begin(), v.end());
        bool cons = true;

        for (int i = 0; i < n - 1; ++i) {
            if (v[i + 1].find(v[i]) == 0) {
                cons = false;
                break;
            }
        }

        if (cons) cout << "YES\n";
        else cout << "NO\n";

    }
}

int main()
{
    bootstrap();
    solve();
   

    return 0;
}