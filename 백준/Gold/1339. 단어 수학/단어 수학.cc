#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;

    vector<string> stv(10);
    vector<int>lenv(10);
   
    for (int e = 0; e < n; ++e)
    {
        cin >> stv[e];
        lenv[e] = stv[e].size();
    }

    int check = 0;
    vector<int>alpha(26);
    for (int e = 0; e < n; ++e)
    {
        check = 1;
        for (int q = lenv[e] - 1; q >= 0; q--)
        {
            alpha[stv[e][q] - 'A'] += check;
            check *= 10;
        }
    }

    sort(alpha.begin(), alpha.end(), [](const auto& a, const auto& b) {
        return a > b;
        });


    int res = 0;
    for (int e = 0; e < 10; ++e)
    {
        res += alpha[e] * (9 - e);
    }
    cout << res;
    return 0;
}
