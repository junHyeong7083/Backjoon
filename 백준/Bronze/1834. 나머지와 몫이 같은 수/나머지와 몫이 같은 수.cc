#include<iostream>
using namespace std;

int main() 
{
    long long int n;
    cin >> n;
   long long int sum = 0;
    for (long long int i = 1; i < n; ++i)
    {
        sum += i * n + i;
    }

    cout << sum;


    return 0;
}