#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
  
    /*
    1초
    n개의 무게추( <= 1000)

    측정할 수 없는 무게의 최소값
    */

    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int e = 0; e < n; ++e)
        cin >> v[e];
    
    sort(v.begin(), v.end());
    
    int sum = 0;

    for (int e = 0; e <= n; ++e)
    {
        if (v[e] > sum + 1)
            break;
        sum += v[e];
    }
    cout << sum+ 1;
    return 0;
}