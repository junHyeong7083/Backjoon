#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

int arr[100001];
int sum[100001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for (int e = 0; e < n; ++e)
        cin >> arr[e];

    sum[0] = arr[0];
    for (int e = 1; e < n; ++e)
        sum[e] = arr[e] + sum[e - 1];

    int t;
    cin >> t;

    while (t--)
    {
        int l, r;
        cin >> l >> r;

        cout << sum[r - 1] - (l > 1 ? sum[l - 2] : 0) << "\n";
    }

    return 0;
}
