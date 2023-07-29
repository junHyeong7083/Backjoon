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
        /*
        1. 서류심사 등수대로 오름차순

        1  4
        2  3 
        3  2
        4  1
        5  5
        
        user[0].second = 4라는 값이 할당됨
        그렇게 두번째 사람부터 검사를함
        3 < 4
        == 더 높은성적이다
         cnt ++;


         ```
               if (user[e].second > min) // 숫자가 작을수록 더 높은 순위
            {
                cnt++;
            }
            else
             min = user[e].second;
        

            cout << user.size() - cnt;
        ```
            1. 서류심사 등수대로 오름차순

        1  4
        2  3
        3  2
        4  1
        5  5

         min =  user[0].second = 4라는 값이 할당됨
         2번째경우
         3 > 4   조건문 x 잘침 ( 통과)
                => min = 3;
        3번째 경우 조건문x 잘침(통과)
         2 > 3      
                => min = 2;
        4번째 경우 1 > 2;
                => min = 1;
        5번째 불합격
                5 > 1
                조건 통과
                cnt ++;

                user.size() - cnt;  // 전체인원 - 불합격
        */


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
