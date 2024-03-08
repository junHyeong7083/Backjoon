#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <deque>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;

        int n;
        cin >> n;
        deque<int> dq;
        string line;
        cin >> line;
        string check = "";

        for (int e = 0; e < line.size(); ++e)
        {
            if (isdigit(line[e]))
                check += line[e];
            else
            {
                if (check.empty())
                    continue;

                dq.push_back(stoi(check));
                check = "";
            }
        }

        bool isReverse = false; // true면 뒤집음
        bool isError = false;
        for (int e = 0; e < str.size(); ++e)
        {
            if (str[e] == 'R')
            {
                isReverse = !isReverse;
            }
            else // delete
            {
                if (dq.empty())
                {
                    isError = true;
                    cout << "error\n";
                    break;
                }
                if (isReverse) // 뒤집은 상태
                    dq.pop_back();
                else // 뒤집x
                    dq.pop_front();
            }
        }

        if (!isError)
        {
            cout << '[';
            if (isReverse) // 뒤집힌 상태
            {
                while (!dq.empty())
                {
                    if (dq.size() != 1)
                        cout << dq.back() << ',';
                    else
                        cout << dq.back();
                    dq.pop_back();
                }
            }
            else
            {
                while (!dq.empty())
                {
                    if (dq.size() != 1)
                        cout << dq.front() << ',';
                    else
                        cout << dq.front();
                    dq.pop_front();
                }
            }
            cout << ']' << "\n";
        }
    }
    return 0;
}
