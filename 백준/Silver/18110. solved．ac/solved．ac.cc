#include <iostream>
#include <vector>
#include <algorithm>
#include<cmath>
using namespace std;


int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    if (n== 0)
    {
        cout << 0;
        return 0;
    }
    vector<int>v(n);

    for (int e = 0; e < n; ++e)
        cin >> v[e];
    sort(v.begin(), v.end());

    int check = round(n * 0.15);
    
    double sum = 0;
    for (int e = check; e+check < n; ++e)
        sum += v[e];
    int res = round(sum / (n - check * 2));

    cout << res;

    return 0;
}
