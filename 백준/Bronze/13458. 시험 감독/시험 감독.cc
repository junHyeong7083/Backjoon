#include <iostream>
#include <cctype>
#include<string>
#include<queue>
#include<stack>
using namespace std;



int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    /*
   2초
   n개의 시험장
   총감독관, 부감독관 2종류
   총감독관은 b, 부감독관은 c명 감독가능

   시험장 개수 n
   각 시험장 응시자수 a
   b,c
    */
    int n;
    cin >> n;

    vector<int>v(n);
    for (int e = 0; e < n; ++e)
        cin >> v[e];

    int b, c;
    cin >> b >> c;

    long long res = n;
    for (int e = 0; e < v.size(); ++e)
    {
        long long cc = v[e] - b;
        if (cc <= 0)
            continue;
        if (cc % c == 0)
            res += cc / c;
        else
            res += cc / c + 1;
    }
    cout << res; 



    return 0;
}
