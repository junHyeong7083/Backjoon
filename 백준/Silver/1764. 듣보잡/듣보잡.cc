#include <iostream>
#include <vector>
#include<string>
#include<algorithm>
#include<map>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(NULL);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    int totalcase = n + m;

    map<string, int> mlisten;
    map<string, int>::iterator iter;
    int cnt = 0;
    for (int i = 0; i < totalcase; ++i)
    {
        string input;
        cin >> input;
            mlisten[input]++;

            if (mlisten[input] >= 2)
                cnt++;
    }

    cout << cnt << endl;
    for (iter = mlisten.begin(); iter != mlisten.end(); ++iter)
    {
        if (iter->second >= 2)
            cout << iter->first << endl;
    }



    return 0;
}
