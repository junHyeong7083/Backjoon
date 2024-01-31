#include<iostream>
#include<algorithm>
#include<stack>
#include<vector>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;

    stack<char> st;
    char preStr = ' ';
    int res = 0;

    for (int e = 0; e < str.size(); ++e)
    {
        if (str[e] == '(')
            st.push(str[e]);
        else
        {
            if (str[e] != preStr) // 레이저
            {
                st.pop();
                res += st.size();
            }
            else
            {
                st.pop();
                res++;
            }
        }
        preStr = str[e];
    }

    cout << res;
   

    return 0;
}