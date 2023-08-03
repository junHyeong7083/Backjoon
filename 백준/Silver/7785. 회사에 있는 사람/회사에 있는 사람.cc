#include <iostream>
#include <vector>
#include<map>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(NULL);
    cin.tie(NULL);

    int t;
    cin >> t;

    map<string, string,greater<>> m;
    for (int e = 0; e < t; ++e)
    {
        string a, b;
        cin >> a >> b;
        m[a] = b;
    }
    map<string, string>::iterator iter;
    for (iter = m.begin(); iter != m.end(); ++iter)
    {
        if (iter->second == "leave")
            continue;
        else
        {
            cout << iter->first << "\n";
        }
    }

    return 0;
}