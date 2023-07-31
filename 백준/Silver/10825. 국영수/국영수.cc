#include <iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<string>
using namespace std;

bool compare(const pair< pair<int, string>, pair<int, int>>& a, const pair< pair<int, string>, pair<int, int>>& b)
{
    if (a.first.first == b.first.first)
    {
        if (a.second.first == b.second.first)
        {
            if (a.second.second == b.second.second)
                return a.first.second <  b.first.second;

            return a.second.second > b.second.second;
        }
        return a.second.first < b.second.first;
    }
    return a.first.first > b.first.first;
}



int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    
    int n;

    string name;
    int kor, mat,eng;
    vector <pair<pair<int,string>, pair<int, int>>>ar;
    cin >> n;
    for (int e = 0; e < n; ++e)
    {
        cin >> name >> kor >> eng >> mat;
        ar.push_back(make_pair(make_pair(kor, name), make_pair(eng, mat)));
    }
    sort(ar.begin(), ar.end(), compare);

    for (int e = 0; e < n; ++e)
    {
        cout << ar[e].first.second << "\n";
    }


    return 0;
}
