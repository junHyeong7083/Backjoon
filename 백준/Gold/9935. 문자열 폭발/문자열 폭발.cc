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

    string str, boom;
    cin >> str >> boom;

    stack<char> s;
    for (int i = 0; i < str.length(); ++i) {
        s.push(str[i]);

        if (s.top() == boom.back() && s.size() >= boom.size()) {
            string check ="";
            for (int e = 0; e < boom.size(); ++e) {
                check += s.top();
                s.pop();
            }
            reverse(check.begin(), check.end());
            if (check != boom) {
                for (int q = 0; q < check.size(); ++q) {
                    s.push(check[q]);
                }
            }
        }
    }

    string ans = "";
    while (!s.empty()) {
        ans += s.top();
        s.pop();
    }
    if (ans.empty())
        cout << "FRULA";
    else
    {
        reverse(ans.begin(), ans.end());

        cout << ans;
    }

    return 0;
}
