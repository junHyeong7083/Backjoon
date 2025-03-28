#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <utility>
#include <vector>
using namespace std;

map<string, int> m;

void Bst()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    Bst();

    int total = 0;
    string str;

    while (getline(cin, str))
    {
        total++;
        m[str]++;
    }

    cout << fixed;
    cout.precision(4);

    for (auto iter = m.begin(); iter != m.end(); ++iter)
    {
        int cnt = iter->second;

        cout << iter->first << " " << (double)(cnt) / total * 100 << "\n";
    }

    return 0;
}
