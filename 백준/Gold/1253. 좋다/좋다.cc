#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<long long> v;
    for (int e = 0; e < n; ++e) {
        long long x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        int left = 0, right = n - 1;

        while (left < right) {
            long long sum = v[left] + v[right];

            if (sum < v[i]) {
                left++;
            } else if (sum > v[i]) {
                right--;
            } else {
              {
                if(left != i && right != i )
                {
                  cnt++;
                  break;
                }
                else if(left == i)
                  left ++;
                else
                  right --;
              }

            }
        }
    }
    cout << cnt;

    return 0;
}