#include <iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<string>
using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b)
{
    return a.first < b.first;
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
   
    int t,n,m;
    cin >> t;
    vector<pair<int, int>> ar;
    for (int e = 0; e < t; ++e)
    {
        cin >> n >> m;
        ar.push_back(make_pair(m, n));
    }
    sort(ar.begin(), ar.end());
    int time = ar[0].first; // 첫번째 회의가끝나는 시간
    int cnt = 1;
    for (int i = 1; i < t; ++i)
    {
        if (time <= ar[i].second)
        {
            cnt++;
            time = ar[i].first;
        }
    }
    cout << cnt;
    return 0;
}
