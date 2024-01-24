#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int f[46] = {0};

void fibo(int _n)
{
    f[0] = 0;
    f[1] = 1;
    for (int e = 2; e <= 45; ++e)
    {
        f[e] = f[e - 1] + f[e - 2];
        if (f[e] >= _n)
            break;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        fibo(n);

        vector<int> v;
        int idx = 45; 
        while (n > 0 && idx >= 0)
        {
            if (f[idx] <= n)
            {
                n -= f[idx];
                v.push_back(f[idx]);
            }
            --idx;
        }

        sort(v.begin(),v.end());
        for (int e = 0; e < v.size(); ++e)
        {
          if(v[e] > 0 && e< v.size()-1)
            cout << v[e] << " ";
          else if(v[e] > 0 && e== v.size()-1)
            cout << v[e];
        }
        cout << "\n";
    }

    return 0;
}