#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    long long t;
    cin >> n >> k >> t;

    vector<long long> v(n);

    for (int i = 0; i < n; ++i) 
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    if (v.front() >= t)
    {
        cout << t;
        return 0;
    }


    queue<long long> qu;
    stack<long long> st;


    for (int e= 0;  e< n; ++e)
    {
        if (v[e] < t) 
            st.push(v[e]);
        else
            qu.push(v[e]);
    }
    for (int e = 0; e < k; ++e)
    {
        if (!st.empty())
        {
            t += st.top();
            st.pop();
            while (!qu.empty() && t > qu.front())
            {
                st.push(qu.front());
                qu.pop();
            }
        }
        else if (st.empty())
        {
            break;
        }
    }
 
    cout << t << "\n";

    return 0;
}
