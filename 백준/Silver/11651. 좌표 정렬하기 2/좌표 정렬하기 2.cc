#include <iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;


bool secondUP(const pair<int, int>& a, const pair<int, int>& b)
{
    if (a.second == b.second)
        return a.first < b.first;
    else
        return a.second < b.second;
}


int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
   
    int n;
    cin >> n;

    vector<pair<int, int>> arr;
    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;
        arr.push_back({x, y});
    }
    
    sort(arr.begin(), arr.end(), secondUP);
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i].first <<  " " << arr[i].second << "\n";
    }
    return 0;
}
