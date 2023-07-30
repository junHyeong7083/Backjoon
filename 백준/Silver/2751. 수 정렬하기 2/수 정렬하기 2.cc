#include <iostream>
#include<algorithm>
#include<vector>
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
    for (int a =0; a < n; ++a)
    {
        cout << arr[a] << "\n";
    }




    return 0;
}
