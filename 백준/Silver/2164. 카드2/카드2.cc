#include <iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
#include<queue>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    queue<int> q;
    for (int i = 1; i <= n; ++i)
    {
        q.push(i);
    }

    if (n == 1)
        cout << "1";

    else 
    {
        int top = 0;
        while (!q.empty())
        {
            q.pop();
            if (!q.empty())
                top = q.front();
            q.push(top);
            q.pop();
        }
        cout << top;
    }
    return 0;
}
