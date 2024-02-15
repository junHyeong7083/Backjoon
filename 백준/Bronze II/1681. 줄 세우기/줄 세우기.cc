#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, L;
    cin >> N >> L;

    int label = 0;
    int count = 0;

    for (int i = 1; count < N; ++i) {
        int num = i;
        bool containsL = false;
        while (num > 0) {
            if (num % 10 == L) {
                containsL = true;
                break;
            }
            num /= 10;
        }
        if (!containsL) {
            label = i;
            count++;
        }
    }

    cout << label << endl;

    return 0;
}