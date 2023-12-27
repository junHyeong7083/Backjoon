#include <iostream>
#include <stack>
#include<queue>
#include<vector>
using namespace std;
int main() {
   
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int index = 0;
        vector<string> s(n,"");
        vector<int> v(n,0);
        for (int e = 0; e < n; ++e)
        {
            cin >> s[e] >> v[e];

            if (e >= 1)
            {
                if (v[e] >= v[e - 1])
                    index = e;
            }
        }
        cout << s[index] << endl;
    }
    return 0;
}
