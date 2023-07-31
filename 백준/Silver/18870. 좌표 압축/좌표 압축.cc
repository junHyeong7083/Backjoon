#include <iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
#include<queue>
using namespace std;

void CPlusSet()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
}


int main()
{
    CPlusSet();
    int n;
    cin >> n;

    vector<int > ar;
    vector<int> copy;
    vector<int>::iterator iter;

    for (int e = 0; e < n; ++e)
    {
        int input;
        cin >> input;
        ar.push_back(input);
        copy.push_back(input);
    }
    sort(copy.begin(), copy.end());
    copy.erase(unique(copy.begin(), copy.end()), copy.end());
    for (iter = ar.begin(); iter != ar.end(); ++iter)
    {
        cout << lower_bound(copy.begin(), copy.end(), *iter) - copy.begin() << ' ';
    }



   
    return 0;
}
