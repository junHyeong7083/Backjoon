#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
   long long int sum = 1;
    if (n == 0)
        sum = 1;

    for (int i = 1; i <= n; ++i)
    {
        sum *= i;
    }

    cout << sum;
    return 0;
}