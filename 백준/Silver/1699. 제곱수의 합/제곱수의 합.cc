#include <iostream>
#include <cctype>
#include<string>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;

int arr[100001];
int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "1";
        return 0;
    }
    // 1로만만드는 최대치
    for (int e = 1; e <= n; ++e)
        arr[e] = e;


    for (int e = 1; e <= n; ++e)
    {
        for (int w = 1; w * w <= e; ++w)
        {
            int cc = w * w;
            arr[e] = min(arr[e], arr[e - cc ] + 1);
        }

    }
   
    cout << arr[n];

    return 0;
}
