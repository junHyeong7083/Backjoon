#include <iostream>
#include <cctype>
#include<string>

using namespace std;

string ROT13(const string& s)
{
    string result = "";

    for (char c : s)
    {
        if (isalpha(c))
        {
            char base = islower(c) ? 'a' : 'A';
            result += ((c - base + 13) % 26) + base;
        }
        else
            result += c;
    }

    return result;
}

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);


    string str;
    getline(cin, str);

    string res = ROT13(str);
    cout << res << endl;

    return 0;
}
