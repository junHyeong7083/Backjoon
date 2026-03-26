#include<iostream>
#include<queue>
#include<tuple>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int n,m;
char arr[10][10];
/*
(1,1) (1,2) (1,3)
이나
(1,1) (1,3) (1,5) ..

이런식  싹다 검사해야할듯?

만들수 있는 최대 길이 111111111
*/
long long maxv = -1;

void bootstrap()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
void init()
{
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> arr[i][j];
}
bool is_perfect_square_check(long long _num) 
{
    if (_num < 0) return false;
    long long root = (long long)sqrt(_num);
    return root * root == _num;
}
void solve()
{
    // 9 
    for (int i = 0; i < n; ++i) 
    {
        // 9
        for (int j = 0; j < m; ++j)
        {
            // 18
            for (int di = -n; di < n; ++di)
            {
                // 18
                for (int dj = -m; dj < m; ++dj)
                {
                    if (di == 0 && dj == 0)
                        continue;

                    string current_str = "";
                    int curr_r = i;
                    int curr_c = j;
                    // 18?
                    while (curr_r >= 0 && curr_r < n && curr_c >= 0 && curr_c < m)
                    {
                        current_str += arr[curr_r][curr_c];
                        long long num = stoll(current_str);

                        if (is_perfect_square_check(num))
                            maxv = max(maxv, num);
                        

                        curr_r += di;
                        curr_c += dj;
                    }
                }
            }
        }
    }

    cout << maxv;
}


int main()
{
    bootstrap();
    init();
    solve();
    return 0;
}