#include <iostream>
#include <vector>
#include<deque>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;

    vector<int> type(n); // 0 = queue, 1 = stack
    for (int i = 0; i < n; ++i) cin >> type[i];

    vector<int> data(n);
    for (int i = 0; i < n; ++i) cin >> data[i];

    deque<int> dq;
    for (int i = 0; i < n; ++i)
    {
        if (type[i] == 0)
            dq.push_back(data[i]);
    }

    
    int m;
    cin >> m;
    while (m--) {
        int x;
        cin >> x;

        if (dq.empty()) {
            cout << x << " ";
            continue;
        }

        dq.push_front(x);
        cout << dq.back() << " ";
        dq.pop_back();
    }
    return 0;
}
