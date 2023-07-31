#include <iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
   
    int n;
    cin >> n;

    vector<pair<int,int>> arr;

    for (int e = 0; e < n; ++e)
    {
        int x, y;
        cin >> x >> y;
        arr.push_back({ x, y });
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i].first << " " << arr[i].second << "\n";
    }

    
    return 0;
}
