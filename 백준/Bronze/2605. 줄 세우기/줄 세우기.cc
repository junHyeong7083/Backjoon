#include <iostream>
#include<string>
#include<math.h>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int main(void) {
    int n;
    cin >> n;

    vector<int>v;
    for (int e = 1; e <= n; ++e)
    {
        int a; 
        cin >> a;
        v.insert(v.begin() + a, e);
    }
    for (int e = n-1; e >= 0; --e)
    {
        cout << v[e] << " ";
    }

    return 0;
}