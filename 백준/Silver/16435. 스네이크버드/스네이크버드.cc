#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
  
    /*
    과일 개수 n
    초기길이 l
    과일 각각의 높이 v
    */
    int n,l;
    cin >> n >> l;
    vector<int>v;
    for (int e = 0; e < n; ++e)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }   
    sort(v.begin(), v.end());
    for (int e = 0; e < v.size(); ++e)
    {
        if (l >= v[e])
        {
            l++;
        }
    }
    cout << l;


    return 0;
}
