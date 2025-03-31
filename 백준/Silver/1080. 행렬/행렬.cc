#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<vector<int>> A, B;

void flip(int x, int y)
{
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            A[x + i][y + j] = 1 - A[x + i][y + j]; // 0 → 1, 1 → 0
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;
    A.resize(n, vector<int>(m));
    B.resize(n, vector<int>(m));

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            char c;
            cin >> c;
            A[i][j] = c - '0';
        }
    }

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            B[i][j] = c - '0';
        }
    }

    int count = 0;
    for (int i = 0; i <= n - 3; i++)
    {
        for (int j = 0; j <= m - 3; j++) 
        {
            if (A[i][j] != B[i][j])
            {
                flip(i, j);
                count++;
            }
        }
    }

    if (A == B) cout << count << '\n';
    else cout << -1 << '\n';

    return 0;
}
