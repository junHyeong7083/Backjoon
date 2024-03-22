#include <iostream>
#include <vector>
#include <algorithm>
#include<cmath>
#include<queue>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    
    queue<pair<int, int>> q;
    for (int e = 0; e < n; ++e)
    {
        int x;
        cin >> x;

        q.push(make_pair(x, e)); // 값과 인덱스 대입
    }

    int timer = 0;

    vector<int>res(n);
    while (!q.empty())
    {
        timer++;
        q.front().first -=1;
        if (q.front().first == 0) // 0이면 빼고
        {
            res[q.front().second] = timer;
            q.pop();
        }
        else // 아니면 돌리기
        {
            q.push(make_pair(q.front().first, q.front().second));
            q.pop();
        }
    }


    for (int e = 0; e < res.size(); ++e)
        cout << res[e] << " ";


    return 0;
}
