#include <iostream>
#include<string>
#include<math.h>
#include<map>
#include<algorithm>
using namespace std;
int main(void) {
    int T;
    cin >> T;

    int n;
    string catag, name;

    while (T--)
    {
        map<string, int> m;
        cin >> n;
        while (n--)
        {
            cin >> name >> catag;
            // find 함수는 찾는 key값이 없으면 end 주소를 리턴
            if (m.find(catag) == m.end())
            {
                m.insert({ catag, 1 });
            }
            else
                m[catag]++;
        }

        int ans = 1;
        for (auto i : m)
        {
            ans *= (i.second + 1);
        }
        ans -= 1;
        cout << ans << '\n';
    }

    return 0;
}