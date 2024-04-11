#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<utility>
#include<limits>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    std::cout.tie(NULL);

    
    int n;
    cin >> n;

    vector<pair<int, int>>v(n);
    for (int e = 0; e < n; ++e)
        cin >> v[e].first >> v[e].second;

    sort(v.begin(), v.end());
    int cnt = 1;
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(v[0].second);

    for (int e = 1; e < n; ++e)
    {
        pq.push(v[e].second);
        if (v[e].first >= pq.top())
            pq.pop();
    }
    cout << pq.size();




    return 0;
}