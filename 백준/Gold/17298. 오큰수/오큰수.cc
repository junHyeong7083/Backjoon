#include<iostream>
#include<algorithm>
#include<stack>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int>arr(n);
    for (int e = 0; e < n; ++e)
        cin >> arr[e];

    vector<int> res(n, -1);

    stack<int> st;
    for (int e = 0; e < n; ++e)
    {
        while (!st.empty() && arr[st.top()] < arr[e])
        {
            res[st.top()] = arr[e];
            st.pop();
        }
        st.push(e);
    }


    for (int e = 0; e < res.size(); ++e)
        cout << res[e] << " ";

    return 0;
}