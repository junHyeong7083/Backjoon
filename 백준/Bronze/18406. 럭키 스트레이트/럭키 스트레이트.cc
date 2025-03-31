#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;

    int len = str.size();

    int left = 0, right = 0;
    for (int e = 0; e < len; ++e)
    {
        if (e < len / 2)
            left += str[e] - '0';
        else
            right += str[e] - '0';

    }

    if (left == right)
        cout << "LUCKY";
    else
        cout << "READY";


    return 0;
}
