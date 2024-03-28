#include <iostream>
#include <cctype>
#include<string>
#include<queue>
#include<stack>
using namespace std;


long long power(long long a, long long b, long long c) 
{
    long long result = 1;
    a %= c;
    while (b > 0)
    {
        if (b % 2 == 1) 
            result = (result * a) % c;
        
        a = (a * a) % c;
        b /= 2;
    }
    return result;
}



int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    cout << power(a, b, c);


    return 0;
}
