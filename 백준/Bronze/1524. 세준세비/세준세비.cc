#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> nv(n+1);
        vector<int> mv(m+1);

        for (int e = 1; e <= n; ++e)
            cin >> nv[e];
        for (int e = 1; e <= m; ++e)
            cin >> mv[e];


        sort(nv.begin(), nv.end(), [](const auto& a, const auto& b)
            {
                return a > b;
            });
        sort(mv.begin(), mv.end(), [](const auto& a, const auto& b)
            {
                return a > b;
            });
        while (n > 0 && m> 0)
        {
            if (nv[n-1] >= mv[m-1])
                m--;
            else
                n--;
        }
        if (n == 0)
            cout << "B" << endl;
        else
            cout << "S" << endl;
    }
     
    return 0;
}
