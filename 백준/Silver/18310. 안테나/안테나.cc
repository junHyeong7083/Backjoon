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
    cout.tie(NULL);
  
    /*
    집의수 n
    설치할 위치 v
    */
    int n;
    cin >> n;
    
    vector<int>v;
    for (int e = 0; e < n; ++e)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    if (n % 2 == 1)
        cout << v[n / 2];
    else
        cout << v[(n - 1) / 2];

    return 0;
}
