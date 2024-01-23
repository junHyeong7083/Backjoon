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


int visit[236196] = { 0 };


int Calculate(int _n, int _p)
{
    int result = 0;
    while (_n > 0)
    {
        int a = _n % 10;
        int b = pow(a, _p);

        result += b;
        _n /= 10;
    }
    return result;
}

void Dfs(int _n, int _p, int* _pres)
{
    int n = _n;

    visit[n - 1]++;

    if (visit[Calculate(_n, _p) - 1] == 2)
    {
        return;
    }

    Dfs(Calculate(_n, _p), _p, _pres);
    if (visit[n - 1] == 1)
    {
        (*_pres)++;
    }
}


int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    std::cout.tie(NULL);
   
    
    int n, p;
    cin >> n >> p;

    int res = 0;
    Dfs(n, p, &res);

    cout << res;
   

    return 0;
}