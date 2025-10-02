#include<iostream>
#include<queue>
#include<utility>
#include<cmath>
using namespace std;

int map[201][201];
bool visit[201][201];
int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

  
    /*
    방문한곳당 10점
    3곳이상 += 20
    5개 방문 == > +=50

    걸음보 1000>= - 15


    */
    int n, w;
    cin >> n >> w;

    int res = 0;
    res += (n * 10);
    if (n >= 3)
        res += 20;
    
    if (n == 5)
        res += 50;



    if (w > 1000)
        res = max(0, res -= 15);

    cout << res;
    return 0;
}
