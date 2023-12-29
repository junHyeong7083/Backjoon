#include<iostream>
#include<map>
#include<string>
#include<stack>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);


    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string str;
        getline(cin, str);
        str += ' ';

        stack<char>s;
        for (char ch : str)
        {
            if (ch == ' ')
            {
                while (!s.empty())
                {
                    cout << s.top();
                    s.pop();
                }
                cout << ch;
            }
            else
                s.push(ch);
        }
        cout << endl;
    }

    return 0;
}