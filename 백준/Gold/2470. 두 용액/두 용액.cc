#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int arr[100001] = {0};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int minv = 2147483647;
    int n;
    cin >> n;

    for (int e = 0; e < n; ++e) {
        cin >> arr[e];
    }

    sort(arr, arr + n);

    vector<int> v(2); 

    int start = 0, end = n - 1;
    while (start < end) {
        int sum = arr[start] + arr[end];
        if (abs(sum) < minv) {
            v[0] = arr[start];
            v[1] = arr[end];
            minv = abs(sum);
        }

        if (sum < 0)
            start++;
        else
            end--;
    }

    sort(v.begin(), v.end());
    cout << v[0] << " " << v[1];

    return 0;
}
