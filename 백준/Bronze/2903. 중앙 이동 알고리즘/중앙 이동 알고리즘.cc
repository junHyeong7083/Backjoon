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
    int n;
    cin >> n;
        
    int x = 2;
    for (int e = 0; e < n; ++e)
    {
        x += (x - 1);
    }
    cout << x * x;
    return 0;
}
