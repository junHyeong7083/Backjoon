#include<iostream>
#include<string>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	string A, B; // a, b 문자열
	cin >> A >> B;
    int ans = 50;
    for (int i = 0; i <= B.length() - A.length(); i++)
    {
        int cnt = 0;
        for (int e = 0; e < A.length(); e++)
        {
            if (A[e] != B[e + i])
                cnt++;
        }
        ans = min(ans, cnt);
    }

    cout << ans << endl;

}