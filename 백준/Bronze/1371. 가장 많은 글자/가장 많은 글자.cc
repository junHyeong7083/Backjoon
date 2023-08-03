#include <iostream>
#include <vector>
using namespace std;

int main()
{
    char c;
    vector<int> cnt_alphabet(26);
    while (cin >> c)
    {
        if ('a' <= c && c <= 'z')
        {
            cnt_alphabet[c - 'a']++;
        }
    }

    int max_element = 0;
    vector<int> max_index;
    for (int i = 0; i < 26; i++)
    {
        if (max_element < cnt_alphabet[i])
        {
            max_element = cnt_alphabet[i];
            if (max_index.size() != 0)
            {
                max_index.resize(0);
            }
            max_index.push_back(i);
        }
        else if (max_element == cnt_alphabet[i])
        {
            max_index.push_back(i);
        }
    }

    for (int i = 0; i < max_index.size(); i++)
    {
        cout << char(max_index[i] + 'a');
    }
  

    return 0;
}