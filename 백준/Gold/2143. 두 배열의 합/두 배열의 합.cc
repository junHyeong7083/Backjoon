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
   
    /*
    T : 더할값
    n
    a배열의 개수
    m
    b배열의 개수
    */
    int t;
    cin >> t;
    int n;
    cin >> n;
    vector<int>a(n);

    for (int e = 0; e < n; ++e)
        cin >> a[e];

    int m;
    cin >> m;
    vector<int>b(m);
    for (int e = 0; e < m; ++e)
        cin >> b[e];


    vector<long long>sumA, sumB;

    for (int e = 0; e < n; ++e)
    {
        long long sum = a[e];
        sumA.push_back(sum);
        for (int q = e+1; q < n; ++q)
        {
            sum += a[q];
            sumA.push_back(sum);
        }
    }  
    for (int e = 0; e <m; ++e)
    {
        long long sum = b[e];
        sumB.push_back(sum);
        for (int q = e+1; q < m; ++q)
        {
            sum += b[q];
            sumB.push_back(sum);
        }
    }

    sort(sumA.begin(), sumA.end());
    sort(sumB.begin(), sumB.end());
    long long result = 0;

    for (int i = 0; i < sumA.size(); i++)
    {
        int target = t - sumA[i];

        int low = lower_bound(sumB.begin(), sumB.end(), target) - sumB.begin();
        int high = upper_bound(sumB.begin(), sumB.end(), target) - sumB.begin();
        result += high - low;

    }

    cout << result << "\n";
    return 0;
}