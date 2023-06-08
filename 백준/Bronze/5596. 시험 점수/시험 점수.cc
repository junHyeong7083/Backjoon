#include <iostream>
#include<string>
#include<string.h>
using namespace std;

int main()
{
    int a[2], b[2], c[2], d[2];
    int sum[2] = { 0 };
    
    for (int i = 0; i < 2; ++i)
    {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
        sum[i] = a[i] + b[i] + c[i] + d[i];
    }

    if (sum[0] < sum[1])
        cout << sum[1];
    else
        cout << sum[0];
  

    return 0;
}
