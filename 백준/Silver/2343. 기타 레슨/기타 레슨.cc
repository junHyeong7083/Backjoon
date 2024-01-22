#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<utility>
#include<limits>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    std::cout.tie(NULL);
   
    int n, m;
    cin >> n >> m;

    vector<long long> lessons(n);
    long long left = 0, right = 0;

    for (int e = 0; e < n; e++)
    {
        cin >> lessons[e];
        right += lessons[e];
        left = max(left, lessons[e]);
    }

    while (left <= right) {
        long long mid = (left + right) / 2;
        long long sum = 0;
        int cnt = 0;

        for (int e = 0; e < lessons.size(); ++e)
        {
            if (sum + lessons[e] > mid)
            {
                sum = 0;
                cnt += 1;
            }
            sum += lessons[e];
        }
        if (sum != 0)
            cnt += 1;
        if (cnt <= m)
            right = mid - 1;
        else
            left = mid + 1;
    }

    cout << left << endl;

    return 0;
}