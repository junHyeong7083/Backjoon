#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(NULL);
    cin.tie(NULL);

   // 500 100 50 10 5;
    int coin[6] = { 500, 100, 50, 10, 5, 1 };

    int input;
    cin >> input;

    int check = 1000 - input;
    int cnt = 0;
    int index = 0;
    while (check != 0)
    {
        if (coin[index] <= check)
        {
            cnt += check / coin[index];
            check %= coin[index];
        }
        else
            index++;

    }
    cout << cnt << endl;
    return 0;
}
