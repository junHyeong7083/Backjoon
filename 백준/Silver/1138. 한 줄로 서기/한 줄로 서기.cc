#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> v(n, 0);
    for (int e = 0; e < n; ++e)
    {
        int x;
        cin >> x;
        for (int w = 0; w < n; ++w)
        {
            if (x == 0 && v[w] == 0)
            {
                v[w] = e + 1;
                break;
            }
            
            if (v[w] == 0)
                x--;

        }
    }
    for (int e = 0; e < n; ++e)
        cout << v[e] << " ";
    return 0;
}
