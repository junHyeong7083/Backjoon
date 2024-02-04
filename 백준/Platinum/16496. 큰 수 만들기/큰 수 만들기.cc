#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<set>
#include<string>
using namespace std;


bool Compare(string& a, string& b)
{
    if (a[0] != b[0]) {
        return a[0] > b[0];
    }
    else {
        return (a + b) > (b + a);
    }
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    /*
    음이 아닌 정수가 n개

    */
    int n;
    cin >> n;

    string res = "";

    vector<string> vs(n);
    bool iserror = true;
    for (int e = 0; e < n; ++e)
    {
        cin >> vs[e];
        if (vs[e] != "0")
            iserror = false;
    }

    sort(vs.begin(), vs.end(), Compare);
 
    for (int e = 0; e < vs.size(); ++e)
        res += vs[e];
    if (!iserror)
        cout << res;
    else
        cout << 0;

    return 0;
}