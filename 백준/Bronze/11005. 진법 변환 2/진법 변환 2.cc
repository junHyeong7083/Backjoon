#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;


int main()
{
    int n, b;
    cin >> n >> b;

    string res = "";
    while (n != 0)
    {
        int e = n % b;

        if (e < 10)
            res += (char)(e + '0');
        else
            res += (char)(e - 10 + 'A');

        n /= b;
    }
    reverse(res.begin(), res.end());


    cout << res;
    return 0;
}