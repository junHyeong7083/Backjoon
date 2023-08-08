#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> ar;
    int t;
    cin >> t;
    for (int e = 0; e < t; ++e)
    {
        string a;
        cin >> a;
        ar.push_back(a);
    }

    int checkindex = -1;
    for (int e = 0; e < t; ++e)
    {
        if (ar[e] == "?")
            checkindex = e;
    }

    char before = '?';
    char after = '?';

    if (checkindex > 0 && checkindex < ar.size() - 1)
    {
        before = ar[checkindex - 1].back();
        after = ar[checkindex + 1].front();
    }
    else if (checkindex == 0 && ar.size() > 1)
    {
        after = ar[1].front();
    }
    else if (checkindex == ar.size() - 1 && ar.size() > 1)
    {
        before = ar[checkindex - 1].back();
    }

    int tt;
    cin >> tt;
    vector<string> candidates;
    for (int e = 0; e < tt; ++e)
    {
        string b;
        cin >> b;
        candidates.push_back(b);
    }
    
    vector<string> good;
    for (int e = 0; e < candidates.size(); ++e)
    {
        bool can = true;
        for (int a = 0; a < ar.size(); ++a)
        {
            if (candidates[e] == ar[a])
            {
                // 같은말 두번
                can = false;
                break; // 중복 체크를 하나만 해도 됨
            }
        }
        if (can)
            good.push_back(candidates[e]);
    }

    for (int e = 0; e < good.size(); ++e)
    {
        if (before == '?' || good[e].front() == before)
        {
            if (after == '?' || good[e].back() == after)
            {
                cout << good[e] << '\n';
                break;
            }
        }
    }

    return 0;
}
