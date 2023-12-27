#include <iostream>
#include <stack>
#include<queue>
#include<vector>
using namespace std;
int main() {
   
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int>v;

    for (int e = 0; e < n; ++e)
    {
        int input;
        cin >> input;

        v.push_back(input);

    }
    int left = v[0], right = v[n-1];
    int lcnt = 1, rcnt = 1;
    for (int e = 1; e < v.size(); ++e)
    {
        if (v[e] > left)
        {
            left = v[e];

            lcnt++;

        }
    }
    for (int e = v.size() -1; e >=  0; --e)
    {
        if (v[e] > right)
        {
            right = v[e];

            rcnt++;
        }
    }

    cout << lcnt << endl << rcnt;
    return 0;
}
