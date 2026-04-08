#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{ 
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());
    int ans = 1;
    for (int i = 0; i < n; i++) {
        int k = 1;
        for (int j = i + 1; j < i + 5; j++) {
            if (v[j] - v[i] < 5 && v[j] - v[i]>0) k++;
        }
        ans = max(ans, k);
    }

    if (ans >= 5) cout << 0;
    else cout << 5 - ans << '\n';

    return 0;
}