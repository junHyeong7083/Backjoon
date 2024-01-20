#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<utility>
using namespace std;


// 길이만 구할때 이분탐색을 이용하면 시간복잡도 좋음

int LIS[1000001] = { 0 };
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    std::cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);

    int len = 0;
    for (int e = 0; e < n; ++e)
    {
        cin >> v[e];
        if (len == 0)
            LIS[len++] = v[e];
        else
        {
            if (LIS[len - 1] < v[e])
                LIS[len++] = v[e];
            else
            {
                LIS[lower_bound(LIS, LIS + len, v[e]) - LIS] = v[e];
            }
        }

    }
    cout << len;
    return 0;
}
