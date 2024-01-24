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
using namespace std;


int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    std::cout.tie(NULL);

    int t;
    cin >> t;      
    cout << fixed;
    cout.precision(1);
    while (t--)
    {
        int n;
        cin >> n;

        int check = 0;
        float total = 0;
        for (int e = 0; e < n; ++e)
        {
            int x;
            float y;
            cin >> x >> y;
            check += x;
            total += x * y;
        }

        cout << check << " " << total / check << endl;
    }

    return 0;
}