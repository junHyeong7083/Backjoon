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

   /*
    책의개수 n
    박스에 넣을수 있는 최대 무게 m
   */
    int n, m;
    cin >> n >> m;

    vector<int>v(n);

    for (int e = 0; e < n; ++e)
        cin >> v[e];

    int cnt = 0;
    int sum = 0;
    for (int e = 0; e < v.size(); ++e)
    {
        if (sum + v[e] > m)
        {
            sum = v[e];
            cnt++;
        }
        else
            sum += v[e];
    }
    
    if (sum > 0)
        cnt++;

    cout << cnt;

   
    return 0;
}