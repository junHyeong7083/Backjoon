#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string Change(int firstidx, int secondidx, const string& input) 
{
    string a = "", b = "", c = "";
    for (int e = 0; e < firstidx; ++e)
        a += input[e];
    for (int e = firstidx; e < secondidx; ++e)
        b += input[e];
    for (int e = secondidx; e < input.size(); ++e)
        c += input[e];

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    reverse(c.begin(), c.end());

    return a + b + c;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input;
    cin >> input;
    int n = input.size();
    vector<string> vs;

    for (int e = 1; e < n - 1; ++e) 
    {
        for (int w = e + 1; w < n; ++w)
            vs.push_back(Change(e, w, input));
    }

    sort(vs.begin(), vs.end());

    cout << vs.front();

    return 0;
}
