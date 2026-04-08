#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;


char map[51][51];
bool check[51][51];
int n, m;
int cnt = 0;

void Sol()
{
    for (int e = 0; e < n; ++e)
    {
        for (int w = 0; w < m; ++w)
        {
            if (check[e][w])
                continue;

            cnt++;
            check[e][w] = true;
            char cc = map[e][w];
            if (cc == '-')
            {
                for (int i = w + 1; i < m; i++)
                {
                    if (map[e][i] == '|')break;
                    check[e][i] = true;
                }

            }
            else
            {
                for (int j = e + 1; j < n; ++j)
                {
                    if (map[j][w] == '-')break;
                    check[j][w] = true;
                }
            }
        }
    }
}



int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
  
    cin >> n >> m;

    for (int e = 0; e < n; ++e)
    {
        for (int w = 0; w < m; ++w)
            cin >> map[e][w];

    }

    Sol();
    cout << cnt;


     
    return 0;
}
