#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


char arr[20][20] = { ' ' };

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    string str;
    cin >> str;

    int idx = 0;
    for (int e = 0; e < str.size() / n; ++e) {
        if (e % 2 == 0) {
            for (int q = 0; q < n; ++q) {
                arr[e][q] = str[idx++];
            }
        }
        else {
            for (int q = n - 1; q >= 0; --q) {
                arr[e][q] = str[idx++];
            }
        }
    }

    for (int q = 0; q < n; ++q) {
        for (int e = 0; e < str.size() / n; ++e) {
            cout << arr[e][q];
        }
    }

    
    return 0;
}
