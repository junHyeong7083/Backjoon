#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<set>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;

   /*
   G = (currentKG)^2 - (rememberKG)^2
   */
    vector<int> res;

    for (int e = 1; e < 100000; ++e)
    {
        int left = 1;
        int right = e;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            int cal = pow(e, 2) - pow(mid, 2);
            if (cal == n)
            {
                res.push_back(e);
                break;
            }
            else if (cal > n)
                left = mid + 1;
            else
                right = mid - 1;
        }
    }
    if (!res.empty())
    {
        for (int e = 0; e < res.size(); ++e)
            cout << res[e] << "\n";
    }
    else
        cout << -1;

    return 0;
}