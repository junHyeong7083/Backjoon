#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<utility>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    std::cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        vector<int>va(a);
        vector<int>vb(b);
        for (int e = 0; e < a; ++e)
            cin >> va[e];
        for (int e = 0; e < b; ++e)
            cin >> vb[e];

        int cnt = 0;
        sort(va.begin(), va.end());
        sort(vb.begin(), vb.end());

        for (int e = 0; e < va.size(); ++e)
        {
            int left = 0;
            int right = b - 1;
            while (left <= right)
            {
                int mid = (left + right) / 2;
                if (va[e] > vb[mid])
                {
                    left = mid + 1;
                }
                else
                    right = mid - 1;
            }
            cnt += left;
        }
        cout << cnt << "\n";
    }

    return 0;
}
