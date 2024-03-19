#include <iostream>
#include <deque>
#include<cmath>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;


int gcd(int a, int b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}

struct Compare
{
    bool operator() (int a, int b)const
    {
        if (abs(a) == abs(b))
            return a > b;
        else
            return abs(a) > abs(b);
    }
};




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue<int, vector<int>, Compare> pq;
    int t;
    cin >> t;
    while (t--)
    {
        int cmd;
        cin >> cmd;

        if (!cmd)
        {
            if (pq.size())
            {
                cout << pq.top() << "\n";
                pq.pop();
            }
            else
                cout << "0" << "\n";
        }
        else
            pq.push(cmd);
    }
    

    return 0;
}
