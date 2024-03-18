#include<iostream>
#include<vector>
#include<algorithm>
#include <string>
#include <queue>
#include <stack>
using namespace std;

bool Cmp(pair<int, int>& p1, pair<int, int>& p2)
{
    return p1.first < p2.first;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  
    int t;
    cin >> t;
    int res = 0;
    while (t--)
    {
        string str;
        cin >> str;

        stack<char>st;
        for (int e = 0; e < str.size(); ++e)
        {
            if (!st.empty()  && st.top() == str[e])
            {
                st.pop();
            }
            else
            st.push(str[e]);
        }


        if (st.empty())
            res++;

    }

    cout << res;

    return 0;
}