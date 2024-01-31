#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;
    string s;
    int sum = 0;
    bool check = false;

    for (int e = 0; e <= str.size(); ++e)
    {
        if (str[e] == '+' || str[e] == '-'  || e == str.size())
        {
            if (check)
                sum -= stoi(s);
            else
                sum += stoi(s);
           s = " ";
        }
        else
        {
            s += str[e];
        }
        if (str[e] == '-')
        {
            check = true;
        }

    }

    cout << sum;
    return 0;
}
