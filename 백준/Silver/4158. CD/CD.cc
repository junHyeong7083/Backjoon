#include <iostream>
#include <cctype>
#include<string>
#include<queue>
#include<stack>
#include<algorithm>
#include<set>
#include<map>
#include<unordered_map>

#define all(v) v.begin(), v.end()

using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    unordered_map<int, int>ma;
    while (true)
    {
        int n, m;
        cin >> n >> m; 
        if (!n && !m)break;

        for (int e = 0; e < n; ++e)
        {
            int x;
            cin >> x;
            ma[x]++;
        }
        int res = 0;
        for (int e = 0; e < m; ++e)
        {
            int x;
            cin >> x;
            if (ma[x])
                res++;
        }

        cout << res << "\n";
        ma.clear();
    }



    return 0;
}
