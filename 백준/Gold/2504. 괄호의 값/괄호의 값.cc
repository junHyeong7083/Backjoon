#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include<deque>
#include<string>
using namespace std;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string str;
    cin >> str;

    stack<char> st;
    int check = 1;
    int res = 0;
    bool error = false;
    for (int e = 0; e < str.size(); ++e)
    {
        switch (str[e])
        {
        case '(':
            st.push(str[e]);
            check *= 2;
            break;

        case '[':
            st.push(str[e]);
            check *= 3;
            break;

        case ')':
            if (st.empty() || st.top() != '(')
            {
                error = true;
                break;
            }
            if (str[e - 1] == '(')
                res += check;
            st.pop();
            check /= 2;
            break;

        case ']':
            if (st.empty() || st.top() != '[')
            {
                error = true;
                break;

            }
            if (str[e - 1] == '[')
                res += check;
            st.pop();
            check /= 3;
            break;

        }
    }

    if (error || !st.empty())
        cout << 0;
    else
        cout << res;
    return 0;
}
