#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string str1, str2;
    while (cin >> str1 >> str2)
    {

        vector<char>vc;

        int idx = 0;
        for (int e = 0; e < str2.size(); ++e)
        {
            if (idx < str1.size())
            {
                if (str2[e] == str1[idx])
                {
                    vc.push_back(str2[e]);
                    idx++;
                }
            }
        }

        if (str1.size() == vc.size())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

        vc.clear();
    }
     
    return 0;
}
