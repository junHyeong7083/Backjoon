#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<utility>
#include<limits>
#include<list>
using namespace std;


int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    std::cout.tie(NULL);

    int  t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        for (int e = 0; e < n; ++e)
            cin >> v[e];

        sort(v.begin(), v.end());
        vector<int>newv(n,0);

        int mid = n/2;
        newv[mid] = v.back();
        v.pop_back();

        int left = mid - 1;
        int right = mid + 1;
        while (!v.empty()) 
        {
            if(left>= 0)
            {
                newv[left ]  = v.back();
                v.pop_back();
                left--;
            }
            if (right < n)
            {
                newv[right] = v.back();
                v.pop_back();
                right++;
            }
        }
        
        int res = 0;
        for (int e = 1; e < newv.size(); ++e)
        {
            int diff = abs(newv[e] - newv[e - 1]);

            res = max(res, diff);
        }

        cout << res << endl;

    }
   
    return 0;
}