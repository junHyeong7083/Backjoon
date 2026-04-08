#include<iostream>
#include<string>
#include<stdio.h>
#include<algorithm>
using namespace std;

int Sum_plus(int num) 
{
    if (num == 0)
        return 5;
    else if (num == 1)
        return 3;
    else
        return 4;
}

int main()
{
    int n, check, cm;

    while (1) 
    {
        cin >> n;
        if (n == 0)
            break;
        cm = 1;
        while (n != 0)
        {
            check = n % 10;
            cm += Sum_plus(check);
            n /= 10;
        }
        cout << cm << endl;
    }

    return 0;
}