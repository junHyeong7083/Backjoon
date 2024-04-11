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
bool check[51] = { false };
string str;
int dfs(string& s, int i)
{
    int cnt = 0;
    for (int e = i; e < s.size(); ++e)
    {
        if ( s[e] == '(' && !check[e])
        {
            check[e] = true;
            int t = s[e - 1] - '0';
            cnt--;
            cnt += t * dfs(s, e + 1);
        }
        else if (s[e] == ')' && !check[e])
        {
            check[e] = true;
            return cnt;
        }
        else if (!check[e])
        {
            check[e] = true;
            cnt++;
        }
    }
    return cnt;
}




int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> str;

    cout << dfs(str, 0);

    return 0;   
}
