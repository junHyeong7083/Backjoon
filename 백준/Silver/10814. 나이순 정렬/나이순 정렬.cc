#include <iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<string>
using namespace std;


bool compareSort(const pair<pair<int, string>, int>& a, const pair<pair<int, string>, int>& b)
{
    if (a.first.first == b.first.first)
    {
        return a.second < b.second;
    }
    return a.first.first < b.first.first;
}


int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
   
    int n;
    cin >> n;

    vector<pair<pair<int, string>,int>> v;
    int check = 0;
    for (int e = 0; e < n; ++e)
    {
        int age; string name;
        cin >> age >> name;
        v.push_back({ { age,name },check });
        check++;
    }
    sort(v.begin(), v.end(), compareSort);
    for (int i = 0; i < n; ++i)
    {
        cout << v[i].first.first << " " << v[i].first.second << "\n";
    }
    return 0;
}
