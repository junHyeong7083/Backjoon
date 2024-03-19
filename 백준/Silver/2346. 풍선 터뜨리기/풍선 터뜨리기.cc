#include <iostream>
#include <deque>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;


int gcd(int a, int b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    /*
    1~n 풍선 원형
        1
     n      2
   n-1      3
         . . .
    */
    int n;
    cin >> n;

    deque<pair<int,int>> dq;

    for (int e = 0; e < n; ++e)
    {
        int x;
        cin >> x;
        dq.push_back(make_pair(x, e+1));
    }

    while (!dq.empty())
    {
        int front = dq.front().first;
        cout << dq.front().second<<" ";
        dq.pop_front();

        if (!dq.empty())
        {
            int move = 0;
            if (front > 0)
            {
                move = front - 1;
                while (move--)
                {
                    dq.push_back(dq.front());
                    dq.pop_front();
                }
            }
            else
            {
                move = -front;
                while (move--)
                {
                    dq.push_front(dq.back());
                    dq.pop_back();
                }
            }
        }
    

    }

 

    return 0;
}
