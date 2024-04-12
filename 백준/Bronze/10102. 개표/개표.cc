#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<utility>
#include<limits>

#define all(v) v.begin(), v.end()
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    std::cout.tie(NULL);

    int n;
    cin >> n;
    string str;
    cin >> str;

    int a = 0, b = 0;
    for (int e = 0; e < str.size(); ++e)
    {
        if (str[e] == 'A')
            a++;
        else
            b++;
    }

    if (a > b)
        cout << "A";
    else if (a < b)
        cout << "B";
    else
        cout << "Tie";
        


    return 0;
}