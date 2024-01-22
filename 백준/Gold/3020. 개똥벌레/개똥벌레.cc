#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<utility>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    std::cout.tie(NULL);
   
    /*
    동굴의 길이 n
    동굴의 높이 h

    홀수 - 석순
    짝수 -종유석

    */
    int n, h;
    cin >> n >> h;

    vector<int>v1(n);
    vector<int>v2(n);
    for (int e = 0; e < n/2; ++e)
    {
        cin >> v1[e] >> v2[e];
   
    } 

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());



    int minv = n; 
    int cnt = 1;  

    for (int e = 1; e <= h; ++e) 
    {
        int objcnt = 0;

        // 석순 파괴
        objcnt += v1.size() - (lower_bound(v1.begin(), v1.end(), e) - v1.begin());

        // 종유석 파괴
        objcnt += v2.size() - (lower_bound(v2.begin(), v2.end(), h - e +1) - v2.begin());

        if (objcnt < minv) 
        {
            minv = objcnt;
            cnt = 1;
        }
        else if (objcnt == minv) 
            cnt++;
    }

    cout << minv << " " << cnt << "\n";

    return 0;
}