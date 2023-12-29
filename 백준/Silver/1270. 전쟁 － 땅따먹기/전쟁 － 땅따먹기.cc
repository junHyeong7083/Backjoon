#include<iostream>
#include<map>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    
    int n;
    cin >> n;
    for (int e = 0; e < n; ++e)
    {
        int t;
        cin >> t;
        map<long long,int>mt;
        long long max = 0;
        long long index = -1;
        for (int e = 0; e < t; ++e)
        {
            long long ti;
            cin >> ti;
            long long check = ++mt[ti];
            if (check > max)
            {
                max = check;
                index = ti;
            }

        }
        if (max > t / 2)
        {
            cout << index << endl;
        }
        else
            cout << "SYJKGW" << endl;
        
    }


    return 0;
}