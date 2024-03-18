#include<iostream>
#include<vector>
#include<algorithm>
#include <string>
#include <queue>
#include <stack>
using namespace std;

bool Cmp(pair<int, int>& p1, pair<int, int>& p2)
{
    return p1.first < p2.first;
}




int arr[1001] = { 0 } ;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    

    int longidx = 0;
    int longy = 0;
    int minx = 1001, maxx = 0;
    for (int e = 0; e < n; ++e)
    {
        int x, y;
        cin >> x >> y;
        arr[x] = y;
        if (y > arr[longidx])
            longidx = x;
     
        maxx = max(maxx, x);
        minx = min(minx, x);
    }

    int checky =0;
    int res = 0;
    for (int e = minx; e <= longidx; ++e)
    {
        checky = max(checky, arr[e]);
        res += checky;
    }
    checky = 0;
    for (int e = maxx; e > longidx; --e)
    {
        checky = max(checky, arr[e]);
        res += checky;
    }

    cout << res;

    return 0;
}