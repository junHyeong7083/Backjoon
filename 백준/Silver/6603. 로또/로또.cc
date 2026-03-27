#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int k;
vector<int> s;
vector<int> result(6); 
void bootstrap()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
bool init() 
{
    if (!(cin >> k) || k == 0) return false;

    s.resize(k);
    for (int i = 0; i < k; ++i) 
        cin >> s[i];
    
    sort(s.begin(), s.end());
    return true;
}
void dfs(int _start, int _depth) 
{
    if (_depth == 6)
    {
        for (int i = 0; i < 6; ++i) 
            cout << result[i] << " ";
        
        cout << "\n";
        return; 
    }
    for (int i = _start; i < k; ++i)
    {
        result[_depth] = s[i];   
        dfs(i + 1, _depth + 1);
    }
}
void solve()
{
    dfs(0, 0);
    cout << "\n";
}
int main() 
{
    bootstrap();
    while (init()) 
        solve();

    return 0;
}