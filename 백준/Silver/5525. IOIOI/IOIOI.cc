#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    string s;
    cin >> s;

    int res = 0;
    for (int e =0; e < M; e++)
    {
        int currentvalue = 0;
        
        if (s[e] != 'I')
            continue;

        // I로 스타트
        while (s[e + 1] == 'O' && s[e + 2] == 'I')
        {
            currentvalue++;
            if (currentvalue == N)
            {
                //OOOIIOIOIIOII
                res++;
                currentvalue--;
            }
            e += 2;

        }

       
    }
    cout << res;
    return 0;
}
