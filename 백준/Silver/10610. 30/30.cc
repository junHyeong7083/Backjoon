#include <iostream>
#include <vector>
#include<string>
#include<algorithm>
#include<map>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(NULL);
    cin.tie(NULL);
    
    string str;
    cin >> str;;

    vector<int> save;
    int changeint = 0;

    for (int i = 0; i < str.size(); ++i) 
    {
        save.push_back(str[i] - '0');
        changeint += save[i];
    }
    sort(save.begin(), save.end(), greater<int>());
    if (save[save.size() - 1] == 0
        && changeint % 3 == 0)
    {
        for (int e = 0; e < save.size(); ++e)
        {
            cout << save[e];
        }
    }
    else
        cout << "-1";


    return 0;
}
