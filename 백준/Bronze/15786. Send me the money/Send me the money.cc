#include <iostream>
#include <vector>
#include <algorithm>
#include<cmath>
#include<deque>
#include<stack>
#include<queue>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, t;
    cin >> n >> t;

    string standard;
    cin >> standard;

    for (int e = 0; e < t; ++e)
    {
        string str;
        cin >> str;

        int idx = 0;
        bool tt = false;
        for (int w = 0; w < str.size(); ++w)
        {
            if (str[w] == standard[idx])
                idx++;

            if (idx == n)
            {
                tt = true;
                break;
            }
        }

        if (tt)
            cout << "true" << "\n";
        else
            cout << "false" << "\n";
     

    }

    return 0;
}
