#include <iostream>
#include <vector>
#include<string>
#include<algorithm>
#include<map>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(NULL);
    cin.tie(NULL);
    
    int input;
    cin >> input;
    vector<int> outtime(input);
    for (int i = 0; i < input; ++i)
    {
        cin >> outtime[i];
    }
    sort(outtime.begin(), outtime.end());

    int tt = 0;
    int sum = 0;
    for (int i = 0; i < input; ++i)
    {
        tt += outtime[i];
        sum += tt;
    }
    cout << sum << endl;
    // 4 2 5 4 3


    return 0;
}
