#include <iostream>
#include <algorithm>
#include <queue>
#include <utility>

using namespace std;

typedef long long ll;
int X1, Y1, X2, Y2, X3, Y3, X4, Y4;
void bootstrap()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}
void init()
{
    cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
}
/*
선분 AB CD
    AC  BD
    AD  BC 
    비교해서 CCW -부호면 정답

     (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);
*/

int ccw(int _x1, int _y1, int _x2, int _y2, int _x3, int _y3)
{
    int cal = (_x2 - _x1) * (_y3 - _y1) - (_y2 - _y1) * (_x3 - _x1);
    if (cal > 0) return 1;
    else if (cal < 0) return -1;
    else return 0;
}

void solve()
{
    int cal1 = ccw(X1, Y1, X2, Y2, X3, Y3) * ccw(X1, Y1, X2, Y2, X4, Y4);
   // int cal2 = ccw(X1, Y1, X3, Y3, X2, Y2) * ccw(X1, Y1, X3, Y3, X4, Y4);
   // int cal3 = ccw(X1, Y1, X4, Y4, X2, Y2) * ccw(X1, Y1, X4, Y4, X3, Y3);
    if (cal1 < 0 )
        cout << "1";
    else
        cout << "0";
}

int main()
{
    bootstrap();
    init();
    solve();
    return 0;
}