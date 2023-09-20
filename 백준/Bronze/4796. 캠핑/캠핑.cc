#include <iostream>
#include <vector>
#include<map>
#include<math.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(NULL);
    cin.tie(NULL);

    int e = 1;
    while (true)
    {
        int L, P, V;
        cin >> L >> P >> V;
        if (L == 0 && P == 0 && V == 0)
            break;
        /*
        L = 사용가능한일
        P = 연속한일수
        V = 휴가일
        */
        int value = V / P;
        int value2 = V % P;
        int ans = value * L + min(value2, L);
        cout << "Case " << e << ": " << ans << endl;
        e++;
    }

    return 0;
}