#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int L, C;
vector<char> v;
void bootstrap()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
void init()
{
    cin >> L >> C;
    v.resize(C);

    for (int i = 0; i < C; ++i)
        cin >> v[i];

    sort(v.begin(), v.end());
}

bool isVowel(char _c) 
{
    return (_c == 'a' || _c == 'e' || _c == 'i' || _c == 'o' || _c == 'u');
}

void dfs(int _index, string _str) 
{
    if (_str.length() == L)
    {
        int vowel = 0, consonant = 0;
        for (char c : _str)
        {
            if (isVowel(c)) vowel++;
            else consonant++;
        }
        // 자음/모음 조건 만족 시 출력
        if (vowel >= 1 && consonant >= 2) 
            cout << _str << "\n";
        
        return;
    }
    for (int i = _index; i < C; ++i) {
        dfs(i + 1, _str + v[i]);
    }
}

void solve() 
{
    dfs(0, "");
}

int main() 
{
    bootstrap();
    init();
    solve();
    return 0;
}