#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<algorithm>
#include<math.h>
#include<list>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        list<char> l;
        string s;
        cin >> s;
        auto cursor = l.begin();
        for (auto e : s) {
            if (e == '<') {
                if (cursor != l.begin()) cursor--;
            }
            else if (e == '>') {
                if (cursor != l.end()) cursor++;
            }
            else if (e == '-') {
                if (cursor != l.begin()) {
                    cursor--;
                    cursor = l.erase(cursor);
                }
            }
            else
                l.insert(cursor, e);

        }
        for (auto e : l) cout << e;
        cout << '\n';
    }

    return 0;
}