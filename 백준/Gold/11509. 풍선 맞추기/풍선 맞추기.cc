#include <cstdio>
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int v[1000001];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    
    cin >> n;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (v[x + 1] >0) 
        {
            v[x + 1]--;
            v[x]++;
        }
        else {
            res++;
            v[x]++;
        }
    }
    cout << res;

    return 0;
}