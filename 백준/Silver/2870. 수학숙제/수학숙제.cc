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



bool Cmp(string& s1, string& s2)
{
    if (s1.size() != s2.size())
        return s1.size() < s2.size();
    else
    {
        return s1 < s2;
    }
}








int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    std::cout.tie(NULL);

    int n;
    cin >> n;

    vector<string>v;
    for (int e = 0; e < n; ++e)
    {
        string str;
        cin >> str;
        string cc = "";
        bool check = false;
        for (int w = 0; w < str.size(); ++w)
        {
            if (isdigit(str[w]))
                cc += str[w];
            else if (!cc.empty())
            {
                while (cc.length() > 1 && cc[0] == '0')
                    cc.erase(0, 1);
                v.push_back(cc);
                cc = "";
            }
        }
    
        if (!cc.empty())
        {
            while (cc.length() > 1 && cc[0] == '0')
                cc.erase(0, 1);
            v.push_back(cc);
        }
    }


    sort(all(v), Cmp);


    for (int e = 0; e < v.size(); ++e)
        cout << v[e] << "\n";


    return 0;
}