#include<iostream>
#include <queue>
using namespace std;

int main() {
    int n;
    cin >> n;   

    int dasom;
    cin >> dasom;

    priority_queue<int> pq;
    for (int i = 0; i < n - 1; i++) {
        int vote;
        cin >> vote;
        pq.push(vote);
    }

    int count = 0;
    while (n != 1) {
        if (dasom <= pq.top()) {
            int max = pq.top();
            pq.pop();
            max--;
            dasom++;
            pq.push(max);

            count++;
        }
        else {
            break;
        }
    }
    cout << count;
    return 0;
}