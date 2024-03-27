#include <iostream>
#include <cctype>
#include<string>
#include<queue>
#include<stack>
using namespace std;


int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;

    stack<char>st;
    bool check = false;
    for (int e = 0; e < str.length(); ++e)
    {
        if (str[e] == 'P')
        {
            st.push(str[e]);
        }
        else //  a
        {
            if (st.size() >= 2 && e < str.size() - 1 && str[e + 1] == 'P')
            {
                st.pop();
                e++;
            }
            else
            {
                check = true;
                break;
            }
        }
    }
    if (!check && st.size() == 1)
        cout << "PPAP";
    else
        cout << "NP";


    return 0;
}
