#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool notPrime[1000001];

void Prime() {
    notPrime[0] = true;
    notPrime[1] = true;

    for (int e = 2; e * e <= 1000000; ++e) {
        if (!notPrime[e]) {
            for (int j = e * e; j <= 1000000; j += e) {
                notPrime[j] = true;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Prime();
    while (true) {
        int x;
        cin >> x;
        if (x == 0)
            break;

        int front, back;
        bool isMake = false;
        for (int e = 3; e < x; ++e) {
            front = e;
            back = x - e;

            if (!notPrime[front] && !notPrime[back]) {
                isMake = true;
                break;
            }
        }
        if (isMake)
            cout << x << " = " << front << " + " << back << "\n";
        else
            cout << "Goldbach's conjecture is wrong." << "\n";
    }

    return 0;
}