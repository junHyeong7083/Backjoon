#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int k;
    cin >> k;

    vector<int> dir(6), len(6);
    int maxW = 0, maxH = 0;
    int maxWidx = 0, maxHidx = 0;

    for (int i = 0; i < 6; ++i) 
    {
        cin >> dir[i] >> len[i];
        if ((dir[i] == 1 || dir[i] == 2) && len[i] > maxW) 
        {
            maxW = len[i];
            maxWidx = i;
        }
        if ((dir[i] == 3 || dir[i] == 4) && len[i] > maxH) 
        {
            maxH = len[i];
            maxHidx = i;
        }
    }

    int smallW = len[(maxHidx + 3) % 6];
    int smallH = len[(maxWidx + 3) % 6];

    int res = (maxW * maxH - smallW * smallH) * k;
    cout << res;

}
