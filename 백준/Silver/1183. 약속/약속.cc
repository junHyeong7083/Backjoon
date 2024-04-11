#include <iostream>
#include <cctype>
#include<string>
#include<queue>
#include<stack>
#include<algorithm>
#include<set>
#include<map>
#include<unordered_map>

#define all(v) v.begin(), v.end()

using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int n;
    cin >> n;

    vector<pair<int, int>>v(n);

    for (int e = 0; e < n; ++e)
        cin >> v[e].first >> v[e].second;

    vector<int>calv(n);

    for (int e = 0; e < v.size(); ++e)
    {
        calv[e] = v[e].first - v[e].second;
    }

    sort(all(calv));
    
    if (n % 2 == 0)
        cout << abs(calv[n / 2] - calv[n / 2 - 1] + 1);
    else
        cout << 1;
       


    return 0;
}
