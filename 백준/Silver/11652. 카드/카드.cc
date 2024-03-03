#include <iostream>
#include <vector>
#include<queue>
#include<algorithm>
#include<unordered_map>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    unordered_map<long long, int> card;

    int maxcnt = 0;
    long long minnum = 4611686018427387904;

    for (int e = 0; e < n; ++e)
    {
        long long x;
        cin >> x;
        card[x]++;

        if (card[x] > maxcnt)
        {
            maxcnt = card[x];
            minnum = x;

        }
        else if (card[x] == maxcnt)
        {
            minnum = min(minnum, x);
        }
    }
   

    cout << minnum;

  

    return 0;
}
