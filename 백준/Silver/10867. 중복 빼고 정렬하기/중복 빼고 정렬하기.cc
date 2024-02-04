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

    set<int> s;
    for (int e = 0; e < n; ++e)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    for (auto iter = s.begin(); iter != s.end(); ++iter)
        cout << *iter << " ";
  
    return 0;
}