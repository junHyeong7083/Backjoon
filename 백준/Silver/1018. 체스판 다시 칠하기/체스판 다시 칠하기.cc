#include <iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
#include<queue>
using namespace std;

void CPlusSet()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
}
int arr[51][51];
int check(int x, int y)
{
    int cnt1 = 0; 
    int cnt2 = 0;
    for (int i = x; i < x + 8; ++i)
    {
        for (int e = y; e < y + 8; ++e)
        {
            if ((i + e) % 2 == arr[i][e])cnt1++;
            if ((i + e + 1) % 2 == arr[i][e])cnt2++;
        }
    }
    return min(cnt1, cnt2);
}
int main()
{
    CPlusSet();
    int result = 2500; //n*m의 최대
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        for (int e = 0; e < m; ++e)
        {
            char c;
            cin >> c;
            if (c == 'B')arr[i][e] = 0;
            else
                arr[i][e] = 1;
        }
    }
    for (int e = 0; e <= n - 8; ++e)
    {
        for (int a = 0; a <= m-8; ++a)
        {
            if (result > check(e, a))
                result = check(e, a);

        }
    }
    cout << result;

    return 0;
}
