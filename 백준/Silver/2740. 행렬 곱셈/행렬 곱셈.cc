#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n1, m1;
    cin >> n1 >> m1;

    vector<vector<int>> v1(n1, vector<int>(m1));
    for (int i = 0; i < n1; ++i)
        for (int j = 0; j < m1; ++j)
            cin >> v1[i][j];

    int n2, m2;
    cin >> n2 >> m2;

    vector<vector<int>> v2(n2, vector<int>(m2));
    for (int i = 0; i < n2; ++i)
        for (int j = 0; j < m2; ++j)
            cin >> v2[i][j];

    vector<vector<int>> res(n1, vector<int>(m2, 0));

    for (int i = 0; i < n1; ++i)
        for (int j = 0; j < m2; ++j)
            for (int k = 0; k < m1; ++k) 
                res[i][j] += v1[i][k] * v2[k][j]; 

    for (int i = 0; i < n1; ++i)
    {
        for (int j = 0; j < m2; ++j)
            cout << res[i][j] << ' ';
        cout << '\n';
    }
}
