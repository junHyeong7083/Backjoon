#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<string>
#include<queue>
#include<stack>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	std::cout.tie(NULL);
	
    double x, y;
    cin >> x >> y;

    double rate = (y * 100) / x;

    if (rate >= 99)
        cout << "-1";
    else
    {
        int s = 0;
        int e = 1000000000;
        int ans = -1;
        while (s<= e)
        {
            int m = (s + e) / 2;
            double res = (double)(y + m) * 100 / (x + m);
            res = floor(res);

            if (res > rate)
            {
                ans = m;
                e = m - 1;
            }
            else
                s = m + 1;
        }
        cout << ans;
    }


    return 0;
}