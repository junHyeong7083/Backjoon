#include <iostream>
#include <cctype>
#include<string>
#include<queue>
#include<stack>
#include<algorithm>
#include<set>
#include<map>
#include<unordered_map>

#define all(v) v.begin(), v.end()

using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
 
    string s1,s2;
    cin >> s1 >> s2;

    if (s1.size() != s2.size())
    {
        cout << 0;
        return 0;
    }
    int len = s1.size();
    int res = 0;
    for (int e = 0; e < len; ++e)
    {
        if (s1[e] == '8' && s2[e] == '8')
            res++;
        else if(s1[e] != s2[e])
            break;
    }

    cout << res;
    return 0;
}
