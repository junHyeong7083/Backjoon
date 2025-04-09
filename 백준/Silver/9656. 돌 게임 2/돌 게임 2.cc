#include<iostream>
using namespace std;

bool dp[1030];

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    dp[1] = false;  
    dp[2] = true; 
    dp[3] = false;  

    for (int i = 4; i <= N; i++) 
    {
        if (!dp[i - 1] || !dp[i - 3]) 
            dp[i] = true;
        else 
            dp[i] = false;
    }

    if (dp[N])
        cout << "SK\n"; 
    else
        cout << "CY\n"; 

    return 0;
}
