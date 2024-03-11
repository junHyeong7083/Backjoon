#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <deque>
#include<string>
#include<map>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;

    map<string, bool> m;
    while (n--)
    {
        string str1, str2;
        cin >> str1 >> str2;

        if (str1 == "ChongChong" || m[str1] || str2=="ChongChong" || m[str2])
        {
            m[str1] = true;
            m[str2] = true;
        }
    }

    int cnt = 0;
    for (auto iter = m.begin(); iter != m.end(); ++iter)
    {
        if (iter->second )
            cnt++;
    }
    cout << cnt;

    return 0;
}
