#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    std::cout.tie(NULL);


    int n;
    cin >> n;
    vector<double> x(n);
    vector<double> y(n);

    // x1 < x2 : x는 오름차순
    for (int i = 0; i < n; ++i) {
        cin >> x[i] >> y[i];
    }

    int k;
    cin >> k;

    for (int i = 0; i < k; ++i) {
        double _k;
        cin >> _k;

        int index = 0;
        int start = 0, end = n - 1;
        while (start < end)
        {
            int mid = (start + end) / 2;
            if (_k >= x[mid] && _k <= x[mid + 1])
            {
                start = mid;
                break;
            }
            else if (_k < x[mid])
                end = mid;
            else
                start = mid + 1;

        }
        int slope = (y[start + 1] - y[start]);

        if (slope > 0)
            cout << "1" << "\n";
        else if (slope < 0)
            cout << "-1" << "\n";
        else
            cout << "0" << "\n";
    }

    return 0;
}