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
    
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
      
        vector<pair<int, int>> user;
        for (int e = 0; e < n; ++e)
        {
            int a, b;
            cin >> a >> b;

            user.push_back(pair<int, int>(a, b));
        }

        sort(user.begin(), user.end());

        /*
        서류심사성적대로 오름차순
        1  4
        2  3 
        3  2
        4  1
        5  5
        */




        int min = user[0].second; //  서류심사1등의 면접시험
        int cnt = 1;
        for (int e = 1; e < n; ++e)
        {
            if (user[e].second < min) // 숫자가 작을수록 더 높은 순위
            {                                   
                min = user[e].second; 
                cnt++;
            }
        } 

        cout << cnt << endl;
    }

    return 0;
}
