#include <iostream>
#include <cctype>
#include<string>
#include<queue>
#include<stack>
#include<algorithm>
#include<set>
#include<map>
using namespace std;



int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;

    map<string, int>ma;
    while (n--)
    {
        string str;
        cin >> str;

        string ss = "";
        for (int e = str.size() - 1; e >= 0; --e)
        {
            if (str[e] == '.')
                break;

            ss += str[e];
        }

        reverse(ss.begin(), ss.end());
        ma[ss]++;
    }
    vector<pair<string, int>>v(ma.begin(), ma.end());
    sort(v.begin(), v.end());

    for (int e = 0; e < v.size(); ++e)
    {
        cout << v[e].first << " " << v[e].second << "\n";
    }



    return 0;
}
