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

    cin >> n;
    vector<int> arr;
    for (int e = 0; e < n; ++e)
    {
        int input;
        cin >> input;
        arr.push_back(input);
    }
    sort(arr.begin(), arr.end() ,greater<>());
    for (int e = 0; e < n; ++e)
    {
        cout << arr[e] << "\n";
   }


    return 0;
}
