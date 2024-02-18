#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
typedef long long ll;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);

    /*
    1. x카드 y 카드 골라 더한값을 계산
    2. x,y카드에 그 값을 대입


    m번하면 끝
    n장의 카드에 쓰인 값을 모두 더한 값이 놀이의 점수
    최소값 구하기

    */
    int n, m;
    cin >> n >> m;

    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for (int e = 0; e < n; ++e)
    {
        int  x;
        cin >> x;
        pq.push(x);
    }

    while (m--)
    {
        ll a, b;
        a = pq.top();
        pq.pop();
        b = pq.top();
        pq.pop();

        ll cal = a + b;
        pq.push(cal);
        pq.push(cal);

    }
    ll res = 0;
    while (!pq.empty())
    {
        res += pq.top();
        pq.pop();
    }

    cout << res;

    return 0;
}
