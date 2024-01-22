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
    전체 용액의 수 n(3<=n<=5000)

    n만큼 용액의 특성값
    */
    int n;
    cin >> n;

    vector<long long>v(n);
    for (int e = 0; e < n; ++e)
        cin >> v[e];

    sort(v.begin(), v.end());

    vector<long long>res(3);
    long long minv = 30000000002;

    for (int e = 0; e < n - 2; ++e) 
    {
        int left = e + 1;
        int right = n - 1;

        while (left < right) 
        {
            long long sum = v[e] + v[left] + v[right];
            long long diff = abs(sum);

            if (diff < minv) 
            {
                minv = diff;
                res[0] = v[e];
                res[1] = v[left];
                res[2] = v[right];
            }

            if (sum < 0)
                left++;
            else if (sum > 0)
                right--;
            else if(sum == 0)
            { 
                sort(res.begin(), res.end());
                cout << res[0] << " "<< res[1] << " "<< res[2];
                return 0;
            }
        }
    }
    sort(res.begin(), res.end());
    cout << res[0] << " " << res[1] << " " << res[2];

    return 0;
}