#include <iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
#include<queue>
using namespace std;


void CPlusSet()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
}
int main()
{
    CPlusSet();
    int m,n;
    cin >> m >> n;

    vector<int> ar;
    for (int e = m; e <= n; ++e)
    {
        for (int i = 1; i <= e; ++i)
        {
            if (e == i * i)
            {
                ar.push_back(e);
                break;
            }
        }
    }
    sort(ar.begin(), ar.end());
    int sum = 0;
    for (int e = 0; e < ar.size(); ++e)
    {
        sum += ar[e];
    }
    if (sum == 0)
        cout << "-1";
    else
        cout << sum << endl << ar[0];
    return 0;
}
