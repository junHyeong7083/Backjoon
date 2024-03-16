#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include<deque>

using namespace std;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;

    stack<int>st;
    long long res = 0;
    for (int e = 0; e < n; ++e)
    {
        int x; 
        cin >> x;
        
        while ( !st.empty() && st.top() <= x)
        {
            st.pop();
        }

        res += st.size();

        st.push(x);
    }

    cout << res;

    return 0;
}
