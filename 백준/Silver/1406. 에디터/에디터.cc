#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<utility>
#include<limits>
#include<list>
using namespace std;


int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    std::cout.tie(NULL);

    string str;
    cin >> str;
  
    list<char> editor(str.begin(), str.end());

    int t;
    cin >> t;
    auto index = editor.end();
    while (t--)
    {
        char cmd;
        cin >> cmd;

        switch (cmd)
        {
        case 'L':
            if (index != editor.begin())
                index--;

            break;

        case 'D':
            if (index != editor.end())
                index++;
            break;

        case 'B': // 커서 왼쪽 문자 삭제
            if (index != editor.begin())
                index = editor.erase(prev(index));
            break;

        case 'P':
            char ch;
            cin >> ch;
            editor.insert(index, ch);

            break;
        }


    }
    for (char ch : editor)
        cout << ch;

    return 0;
}