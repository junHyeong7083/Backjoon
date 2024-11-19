#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

void Boost()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool isCheckAEIOU(string _str)
{
    for (int e = 0; e < _str.size(); ++e)
    {
        if (_str[e] == 'a' || _str[e] == 'e' || _str[e] == 'i' || _str[e] == 'o' || _str[e] == 'u')
            return true;


    }
    return false;
}

bool isCheckThree(string _str)
{
    int mo = 0;
    int ja = 0;
    for (int e = 0; e < _str.size(); ++e)
    {
        if (_str[e] == 'a' || _str[e] == 'e' || _str[e] == 'i' || _str[e] == 'o' || _str[e] == 'u')
        {
            mo++;
            ja = 0;
        }
        else
        {
            ja++;
            mo = 0;
        }

        if (mo == 3 || ja == 3)
            return false;


    }
    return true;
}


bool isCheckTwo(string _str)
{
    char pre = _str[0];
    if (_str.size() > 1)
    {
        for (int e = 1; e < _str.size(); ++e)
        {
            if (_str[e] != 'e' && _str[e] != 'o')
            {
                if (pre == _str[e])
                    return false;
            }

            pre = _str[e];
        }
        return true;
    }
      return true;
}


int main()
{
    Boost();
    string str;

    while (cin >> str)
    {
        if (str == "end")
            break;

        // a e i o u 하나 포함

        // 모음3개 자음3개 연속오면안됨

        // 같은글자 2개 연속안됨 단 ee oo 두개 가능

        if (isCheckAEIOU(str) && isCheckThree(str) && isCheckTwo(str))
            cout << "<" << str << ">" << " is acceptable." << endl;
        else
            cout << "<" << str << ">" << " is not acceptable." << endl;
    }


    return 0;
}