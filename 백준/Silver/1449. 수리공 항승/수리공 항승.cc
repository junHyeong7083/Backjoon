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
  
    /*
    길이 : L 
    막을때 좌우 0.5만큼 간격 필요
    물이새는곳 개수 : N
    테이프 길이 : L

    물이 새는곳의 위치

    */
    int n, l;
    cin >> n >> l;
    vector<int> pos;
    for (int e = 0; e < n; ++e)
    {
        int x;
        cin >> x;
        pos.push_back(x);
    }

    sort(pos.begin(), pos.end());
    
    int cnt = 1; // 기본 테이프1개
    int len = pos[0];
    for (int e = 1; e < pos.size(); ++e)
    {
        if (pos[e] -  len + 1 > l)
        {
            cnt++;
            len = pos[e];
        }
    }

    cout << cnt;
  
    return 0;
}
