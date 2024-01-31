#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    bool ischeck = false;
    long long  n;
    cin >> n;
    if (n < 10)
    {
        cout << "NO";
        return 0;
    }


    int v1 = 1;

    while (n >0)
    {
        int dlight = n % 10;
        v1 *= dlight;
        n = n / 10;
        int tmp = n;
        int v2 = 1;
        while (tmp > 0)
        {
            int tmpdlight = tmp % 10;
            v2 *= tmpdlight;
            tmp /= 10;

        }
        if (v1 == v2)
        {
            ischeck = true;
            break;
        }


    }
    if (ischeck)
        cout << "YES";
    else
        cout << "NO";


    
    return 0;
}
