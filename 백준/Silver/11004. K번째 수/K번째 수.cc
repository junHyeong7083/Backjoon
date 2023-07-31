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
    
    int n,k;

    cin >> n >> k;
    vector<int> arr;
    for (int e = 0; e < n; ++e)
    {
        int input;
        cin >> input;
        arr.push_back(input);
    }
    sort(arr.begin(), arr.end());
    cout << arr[k - 1];
   


    return 0;
}
