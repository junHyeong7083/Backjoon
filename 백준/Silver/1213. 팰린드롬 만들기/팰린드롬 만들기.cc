#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<utility>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    std::cout.tie(NULL);
    
    string s;
    cin >> s;
    vector<int>v(26,0);
    for (char alpha : s)
    {
        v[alpha - 'A']++;
    }

    string odd, even;
    for (char alpha = 'A'; alpha <= 'Z'; ++alpha)
    {
        if (v[alpha - 'A'] % 2 == 1)
        {
            odd += alpha;
        }
        for (int e = 0; e < v[alpha - 'A'] / 2; e++)
        {
            even += alpha;
        }
    }
    if (odd.size() > 1)
    {
        printf("I'm Sorry Hansoo");
    }
    else
    {
        cout << even;
        cout << odd;
        reverse(even.begin(), even.end());
        cout << even;
    }
}