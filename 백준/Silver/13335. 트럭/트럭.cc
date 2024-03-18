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

    /*
    n 트럭수
    w 다리 길이
    l 최대하중
    */
    int n, w, l;
    cin >> n >> w >> l;


    queue<int>qu;
    queue<int>car;
    for (int e = 0; e < n; ++e)
    {
        int x;
        cin >> x;
        qu.push(x);
    }
    int res = 0, cnt = 0;
    int curweight = 0;
    while (!qu.empty())
    {
        if (car.size() >= w)
        {
            curweight -= car.front();
            car.pop();
        }
        
        if (curweight + qu.front() > l)
            car.push(0);
        else
        {
            curweight += qu.front();
            car.push(qu.front());
            qu.pop();
        }
        res++;
    }
    cout << res+w;

    return 0;
}
