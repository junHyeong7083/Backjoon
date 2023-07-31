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

    /*
    고려할점

    endl 은 \n보다 속도가 느리다 ( flush()를 호출함 )
    */


    return 0;
}
