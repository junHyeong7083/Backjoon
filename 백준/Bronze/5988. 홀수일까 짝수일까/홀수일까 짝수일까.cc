#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<utility>
#include<limits>

#define all(v) v.begin(), v.end()
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    std::cout.tie(NULL);

    int n;
    cin >> n;

    for (int e = 0; e < n; ++e)
    {
        string str;
        cin >> str;

        if (str.back() == '1' || str.back() == '3' || str.back() == '5' || str.back() == '7'
            || str.back() == '9')
            cout << "odd" << "\n";
        else
            cout << "even\n";
    }


    return 0;
}