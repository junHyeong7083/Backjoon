#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;




int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    /*
    1. q앞에 있는 문서의 중요도 확인
    2. 나머지 문서중 현재 문서보다 중요도가 높은문서존재-> 현재문서 인쇄 x ->
    q의 가장뒤 배치

    a b c d
    2 1 4 3

    테스트 케이스 t

    문서의 개수 n, 몇번쨰로 인쇄되었는 지 궁금한 m(현재의 idx)
    idx 는 0부터 

    두번째줄은 n개의 문서의 중요도가 차례대로
    */

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        queue<pair<int, int>> qu;
        priority_queue<int> pq;
        for (int e = 0; e < n; ++e)
        {
            int x;
            cin >> x;
            qu.push(make_pair(x, e));

            pq.push(x);
        }
        int ans = 1;
        while (true)
        {
            int f = qu.front().first;
            int s = qu.front().second;

            if (f != pq.top())
            {
                qu.pop();
                qu.push(make_pair(f, s));
            }
            else
            {
                if (s == m)
                    break;
                else
                {
                    qu.pop();
                    pq.pop();
                    ans++;
                }
            }

        }
        cout << ans << "\n";
    }

     
    return 0;
}
