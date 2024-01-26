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
#include<set>
#include<map>
using namespace std;



int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    std::cout.tie(NULL);

   
    /*
    수 3개를 이용해 연도표현
    지구 > 태양 > 달
    i) 지구 ( 1<= e <= 15)
    ii) 태양 ( 1<= s <= 28)
    iii) 달 ( 1<= m <= 19)

    ex ) 1년 -> 1 1 1
         15년 -> 15 15 15
         16년 -> 1 16  16
    
    */
    
    int e, s, m;
    cin >> e >> s >> m;

    int e1 = 0, s1 = 0, m1 = 0;


    int year = 0;
    while(true)
    {
        if (e1 == e && s1 == s && m1 == m)
        {
            cout << year;
            break;
        }


        e1++;
        s1++;
        m1++;
        if (m1 > 19)
            m1 = 1;
        if (s1 > 28)
            s1 = 1;
        if (e1 > 15)
            e1 = 1;

        year++;
    }

   
   
    return 0;
}