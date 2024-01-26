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



int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    std::cout.tie(NULL);

    int idx = 0;
    int n;
    while (cin >> n) 
    {
        int tmp = 0;
        for (int e = 1; e <= n; e++) {
            tmp = tmp * 10 + 1;
            tmp %= n;
            if (tmp == 0)
            {
                cout << e << "\n";
                break;
            }
        }
    }
   
   
    return 0;
}