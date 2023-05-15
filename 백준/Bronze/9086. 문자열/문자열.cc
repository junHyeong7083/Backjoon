#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    while (n--)
    {
        char a[256];

        cin >> a;
        int len = strlen(a);

        cout << a[0] << a[len - 1] << endl;
    }


    return 0;
}