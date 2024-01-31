#include<iostream>
#include<algorithm>
#include<stack>
#include<vector>
#include<string>
#include<queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    getline(cin,str);
    stack<char>st;
    bool check = false;
    int idx = 0;
    for (char ch : str)
    {
        idx++;
        if (ch == '<')
        {
            while (!st.empty())
            {
                cout << st.top();
                st.pop();
            }
            cout << ch;
            check = true;
        }
        else if (ch == '>')
        {
            cout << ch;
            check = false;
        }
        else if (check)
            cout << ch;
        else if (ch == ' ')
        {
            while (!st.empty())
            {
                cout << st.top();
                st.pop();
            }
            cout << " ";
        }
        else
            st.push(ch);
    }

    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }

    return 0;
}