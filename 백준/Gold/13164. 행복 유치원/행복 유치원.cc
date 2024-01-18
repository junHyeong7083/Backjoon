#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    std::cout.tie(NULL);

    int n, k;
    vector<int> v;
    cin >> n >> k;
    vector<int> newv(n-1);
    for (int e = 0; e < n; ++e)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int e = 1; e < v.size(); ++e)
    {
        newv[e - 1] = v[e] - v[e - 1];
    }
    
    sort(newv.begin(), newv.end());
    long long cost = 0;

    for (int i = 0; i < n-k; ++i) {
        cost +=(long long) newv[i];
    }

    cout << cost << endl;
    return 0;

}
