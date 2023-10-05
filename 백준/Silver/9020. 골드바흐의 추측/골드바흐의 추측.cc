#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n + 1, 0);

        for (int e = 2; e <= n; ++e)
        {
            if (v[e] == 1)
                continue;
            for (int i = e * 2; i <= n; i += e) 
            {
                v[i] = 1;
            }
        }

        vector<int> v2;
        for (int e = 2; e <= n; ++e) 
        {
            if (v[e] == 0)
            {
                v2.push_back(e);
            }
        }

        int value1 = 0, value2 = 0;
        vector<int>check1;
        vector<int>check2;
        for (int e = 0; e < v2.size(); ++e)
        {
            for (int i = e ; i < v2.size(); ++i)
            {
                if (v2[e] + v2[i] == n)
                {
                    value1 = v2[e];
                    value2 = v2[i];
                    check1.push_back(value1);
                    check2.push_back(value2);
                }
            }
        }
        value1 = check1.back();
        value2 = check2.back();

        cout << value1 << " " << value2 << endl;
    }
    return 0;
}
