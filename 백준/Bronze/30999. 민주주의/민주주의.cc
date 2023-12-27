#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;
    int total = 0;

    for (int i = 0; i < N; ++i) {
        string opinions;
        cin >> opinions;

        int approvalCount = 0;
        for (char c : opinions) {
            if (c == 'O') {
                approvalCount++;
            }
        }

        if (approvalCount > M / 2) {
            total++;
        }
    }

    cout << total;
    return 0;
}
