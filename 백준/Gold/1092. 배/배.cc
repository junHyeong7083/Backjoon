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
    크레인의 수 n
    n개 무게제한 입력
    박스의 수 m
    m개 박스무게 입력
   */
    int n;
    cin >> n;
    vector<int>v1(n);
    for (int e = 0; e < n; ++e)
        cin >> v1[e];
    
    int m;
    cin >> m;
    vector<int>v2(m);
    for (int e = 0; e < m; ++e)
        cin >> v2[e];

    
    sort(v1.begin(), v1.end(), [](const auto& a, const auto& b) {
        return a > b;  });
    sort(v2.begin(), v2.end(), [](const auto& a, const auto& b) {
        return a > b; });
  
    if (v1.front() < v2.front())
    {
        cout << "-1";
        return 0;
    }


    int t = 0;
    int index = 0;
    while (!v2.empty())
    {
        t++;
        for (int e = 0; e < v1.size(); ++e)
        {
            for (int q = 0; q < v2.size(); ++q)
            {
                if (v1[e] >= v2[q])
                {
                    v2.erase(v2.begin() + q);
                    break;
                }
            }
        }
    }
    cout << t;
    return 0;
}