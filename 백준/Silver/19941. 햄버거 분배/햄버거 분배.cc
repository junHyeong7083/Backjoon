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
    사람수 n, 위치차이 k
    각 인덱스의 +- k위치만큼 햄버거 냠냠
    */
    int n, k;
    cin >> n >> k;
    string str = "";
    for (int e = 0; e < n; ++e)
    {
        char c;
        cin >> c;
        str += c;
    }
   
    vector<bool> visited(n, false); 
    int cnt = 0;
    for (int e = 0; e < n; ++e) 
    {
        if (str[e] == 'P')
        {
            for (int j = max(0, e - k); j <= min(n - 1, e + k); ++j) 
            {
                if (!visited[j] && str[j] == 'H')
                {
                    visited[j] = true; // 해당 햄버거먹음
                    cnt++;
                    break;
                }
            }
        }
    }
    cout << cnt;

    return 0;
}