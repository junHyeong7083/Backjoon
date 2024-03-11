#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    int n, m;
    map<string, int> words;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        if (word.length() >= m)
        {
            words[word]++;
        }
    }

    vector<pair<string, int>> wordsByFreq(words.begin(), words.end());

    sort(wordsByFreq.begin(), wordsByFreq.end(), [](const auto& lhs, const auto& rhs)
        {
            if (lhs.second != rhs.second) {
                return lhs.second > rhs.second;
            }
            else if (lhs.first.length() != rhs.first.length())
            {
                return lhs.first.length() > rhs.first.length();
            }
            else { return lhs.first < rhs.first; } });

    for (const auto& pair : wordsByFreq)
    {
        cout << pair.first << "\n";
    }

    return 0;
}