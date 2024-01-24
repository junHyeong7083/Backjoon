#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<utility>
#include<limits>
#include<list>
using namespace std;


int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    std::cout.tie(NULL);

    int h, w;
    cin >> h >> w;

    vector<int>v(w);
    for (int e = 0; e < w; ++e)
        cin >> v[e];

    int cnt = 0;

    for (int e = 0; e < v.size()-1; ++e)
    {
        int leftMax = *max_element(v.begin(), v.begin() + e);
        int rightMax = *max_element(v.begin() + e + 1, v.end());

        int maxH = min(leftMax, rightMax);

        if (maxH > v[e])
            cnt += maxH - v[e];
    }

    cout << cnt;
   
    return 0;
}