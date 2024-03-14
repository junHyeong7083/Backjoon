#include <string>
#include <algorithm>
#include <vector>
#include <iostream>
#include <queue>
#include <cmath>
#include <stack>
#include <deque>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    stack<pair<int, char>> st;
    deque<char> dq;

    string res = "";
    while (t--)
    {
        int id;
        char ch;
        cin >> id;
        if (id != 3)
        {
            cin >> ch;
            st.push(make_pair(id, ch));
        }

        switch (id)
        {
        case 1: // 맨뒤
            dq.push_back(ch);
            break;

        case 2: // 맨앞
            dq.push_front(ch);
            break;

        default:
            if (!st.empty())
            {
                if (st.top().first == 1)
                    dq.pop_back();
                else if (st.top().first == 2)
                    dq.pop_front();
                st.pop();
            }
            break;
        }
    }

    if (dq.empty())
    {
        cout << 0;
        return 0;
    }
    while (!dq.empty())
    {
        res += dq.front();
        dq.pop_front();
    }

    cout << res;
    return 0;
}
