#include <iostream>
#include <vector>
#include<queue>
#include<algorithm>
#include<unordered_map>
using namespace std;



bool Cmp(pair<int,int>&a, pair<int,int>&b)
{
    return a.second > b.second;
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

   /*
   i) 하루에 과제 하나씩 해결가능
   ii) 마감일이 지나면 점수 x

   첫줄 n
   d w순으로
   d : 과제마감일까지 남은 일수
   w : 과제의 점수
   
   */
    int n;
    cin >> n;

    vector<pair<int, int>> v(n);
    
    for (int e = 0; e < n; ++e)
        cin >> v[e].first >> v[e].second;

    sort(v.begin(), v.end(), Cmp);

    vector<int> save(1001,0);
    for (int e = 0; e < v.size(); ++e)
    {
        int day = v[e].first;
        int cnt = v[e].second;

        for (int w = day; w >= 1; --w)
        {
            if (!save[w])
            {
                save[w] = cnt;
                break;
            }
        }

    }

    int res = 0;


    for (int e = 0; e < save.size(); ++e)
        res += save[e];

    cout << res;


    return 0;
}
