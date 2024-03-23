#include <iostream>
#include <stack>
#include<vector>
#include<algorithm>
using namespace std;



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int>v(26);

    string str;
    cin >> str;

    for (int e = 0; e < str.size(); ++e)
    {
        v[str[e]-'a']++;
    }
    for (int e = 0; e < v.size(); ++e)
        cout << v[e] << " ";

    return 0;
}
