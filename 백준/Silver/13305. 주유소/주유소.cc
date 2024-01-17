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
    cout.tie(NULL);
  
    int n;
    cin >> n;
    vector<long long> dis;
    for (int e = 0; e < n - 1; ++e)
    {
        int x;
        cin >> x;
        dis.push_back(x);
    }
    
    vector<long long> gas;
    for (int e = 0; e < n; ++e)
    {
        int x;
        cin >> x;
        gas.push_back(x);
    }

    long long sum = 0;
    int minc = 1000000000;
    for (int e = 0; e < dis.size(); ++e)
    {
        if (gas[e] < minc)
            minc = gas[e];
        sum += minc * dis[e];
    }


   cout << sum;

  
    return 0;
}
