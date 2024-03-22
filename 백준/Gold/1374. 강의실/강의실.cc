#include <iostream>
#include <vector>
#include <algorithm>
#include<cmath>
#include<queue>
using namespace std;


int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;



    vector<pair<int, int>> v(n);
    int num;
    for (int e = 0; e < n; ++e)
        cin >> num >> v[e].first >> v[e].second;

    priority_queue<int, vector<int>, greater<int>> pq;
    sort(v.begin(), v.end());
    int res = 1;
    for (int e = 0; e < v.size(); ++e)
    {
        if (!pq.empty())
        {
            if (pq.top() <= v[e].first)
                pq.pop();
            else
                res++;
        }

        pq.push(v[e].second);
    }
    cout << res;

    return 0;
}
