#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    int n;
    cin >> n;
    
    vector<int>v(n);
    for(int e = 0; e< n; ++e)
        cin >> v[e];
    
    sort(v.begin(), v.end());
    
    for(int w= 0; w< n; ++w)
        cout << v[w] <<" ";
    
    return 0;
}