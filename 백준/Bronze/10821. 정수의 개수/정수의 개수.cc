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

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  
    string str;
    cin >> str;

    stack<char>st;
    int cnt = 0;
    for (int e = 0; e < str.size(); ++e)
    {
        if (str[e] == ',' || e == str.size() - 1)
        {
            cnt++;

        }
        else
            continue;
    }
    cout << cnt;

    return 0;
}