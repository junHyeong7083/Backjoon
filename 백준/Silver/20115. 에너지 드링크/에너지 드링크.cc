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
#include<set>
#include<map>
using namespace std;



bool Compare(string a, string b)
{
    if (a.length() != b.length())
        return a.length() < b.length();
    else
        return a < b;
}





int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    std::cout.tie(NULL);

    /*
    임의의 수 2개

    x1 += (x2/ 2) 
    x2 += (x1 / 2)
    
    만들 수 있는 최대값
    */
    int n;
    cin >> n;
    vector<double>v(n);

    for (int e = 0; e < n; ++e)
        cin >> v[e];

    sort(v.begin(), v.end());


    double cnt = v.back();

    for (int e = 0; e < v.size() - 1; ++e) 
    {
        cnt += (v[e] / 2);
    }
    cout << cnt;

   
    return 0;
}