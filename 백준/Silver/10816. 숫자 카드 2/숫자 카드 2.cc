#include <iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<string>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    vector<int> arr;
    for (int e = 0; e < n; ++e)
    {
        int input;
        cin >> input;
        arr.push_back(input);
    }

    sort(arr.begin(), arr.end());

    int m;
    cin >> m;
    // lower_bound : 해당 숫자가 시작하는 위치 반환
    // upper_bound : 해당 숫자가 끝나는 위치 반환
    vector<int> result(m);
    for (int e = 0; e < m; ++e)
    {
        int input;
        cin >> input;
        auto up = upper_bound(arr.begin(), arr.end(), input);
        auto low= lower_bound(arr.begin(), arr.end(), input);

        result[e]=  up - low;
    }

    for (int i = 0; i < m; ++i)
        cout << result[i] << "\n";

    return 0;
}
