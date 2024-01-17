#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>>pq;

    for (int e = 0; e < n; ++e)
    {
        int x;
        cin >> x;

        pq.push(x);
    }

    int res = 0;
    while (1)
    {
        if (pq.size() == 1)
            break;

        int i = pq.top(); 
        pq.pop();
        int j = pq.top();
        pq.pop();

        int sum = i + j;
        res += sum;
        pq.push(sum);

    }

    cout << res;

      
    return 0;
}
