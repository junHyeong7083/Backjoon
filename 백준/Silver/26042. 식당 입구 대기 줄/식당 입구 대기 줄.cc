#include <iostream>
#include <deque>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    deque<int> dq;
    int size = 0; 
    int lastnum = 1000000;
    int cur = 0; 

    for (int i = 0; i < n; ++i) 
    {
        int type;
        cin >> type;
        if (type == 1) 
        {
            int x;
            cin >> x;
            dq.push_back(x);
            cur++;
        }
        else 
        {

            dq.pop_front();
            cur--;
        }

        if (cur > size)
        {
            size = cur;
            lastnum =dq.back();
        }
        else if (cur == size)
        {
            lastnum = min(dq.back(), lastnum);
        }
    }

    cout << size << " " << lastnum << "\n";

    return 0;
}
