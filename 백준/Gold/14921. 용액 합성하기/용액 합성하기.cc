#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<set>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    /*
    n개의 숫자중(오름차순으로 입력주어짐)

    2개을 더해서 절대값이 0에 가장 가까운값
    */
    int n;
    cin >> n;
    vector<int> v(n);

    for (int e = 0; e < n; ++e)
        cin >> v[e];

    int left = 0, right = n - 1;
    int minv = abs(v[left] + v[right]);

    int pre  =abs( v[left] + v[right]);
    while (left < right)
    {
        int sum = (v[left] + v[right]);
        if (abs(sum) <= pre)
        {
            pre = abs(sum);

            minv = sum;
        }


        if (sum < 0)
            left++;
        else
            right--;
    }

    cout << minv;

    return 0;
}