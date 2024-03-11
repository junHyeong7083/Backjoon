#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <deque>
#include<string>
#include<map>
using namespace std;


bool Cmp(pair<string, int>const& p1, pair<string, int>const& p2)
{
    if (p1.second != p2.second)
        return p1.second > p2.second;
    else if (p1.first.size() != p2.first.size())
        return p1.first.size() > p2.first.size();
    else
        return p1.first < p2.first;  
}




int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    /*
    1. 자주나올수록 앞에 배치
    2. 단어의 길이가 길수록 앞에 배치
    3. 알파벳 사전순으로 앞에있는 단어일수록 앞에 배치
    
    m보다 크기가 작은건 무시해도됨
    */
    int n, m;
    cin >> n >> m;
    map<string, int> mm;

    for (int e = 0; e < n; ++e)
    {
        string str;
        cin >> str;
        if (str.size() < m)
            continue;

         mm[str]++;
    }

    vector<pair<string, int>>v(mm.begin(), mm.end());

    sort(v.begin(), v.end(), Cmp);

    for (int e = 0; e < v.size(); ++e)
        cout << v[e].first << "\n";

    return 0;
}
