#include <iostream>
#include <vector>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
map<string, int> check;
int main()
{
    ios::sync_with_stdio(0);
    cout.tie(NULL);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    for (int e = 0; e < n; ++e)
    {
        string input;
        cin >> input;
        check.insert(pair<string, int>(input, -1));
    }

    int cnt = 0;
    for (int i = 0; i < m; ++i)
    {
        string compare;
        cin >> compare;
        if (check[compare] == -1)
            cnt++;
    }
    cout << cnt << endl;

    return 0;
}
