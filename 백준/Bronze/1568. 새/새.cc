#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;

    int curNum = 1;
    int res = 0;
    while (n> 0)
    {
        if (n >= curNum)
        {
            n -= curNum;
            res++;
            curNum++;
        }
        else
            curNum = 1;

    }
    cout << res;

    return 0;
}
