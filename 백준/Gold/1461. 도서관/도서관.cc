#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    std::cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int>posPos; // 양수 입력값
    vector<int>negPos; // 음수 입력값

    bool isPos = false;
    bool isNeg = false;
    for (int e = 0; e < n; ++e)
    {
        int x;
        cin >> x;
        x >= 0 ? posPos.push_back(x) : negPos.push_back(x);
        x >= 0 ? isPos = true: isNeg = true;
    }
    if(isPos)
        sort(posPos.begin(), posPos.end());
    if(isNeg)
        sort(negPos.begin(), negPos.end());
    // -39, -37,  -29, -28, -6, 2, 11
    int dis = 0;
    for (int e = posPos.size() - 1; e >= 0; e -= m)
    {
        dis += (posPos[e] * 2);
    }

    for (int e = 0; e < negPos.size(); e += m)
    {
        dis += abs(negPos[e] * 2);
    }
    if (isPos && !isNeg)
        dis -= abs(posPos.back());
    else if (isNeg && !isPos)
        dis -= abs(negPos[0]);
    else if (isPos && isNeg)
        dis -= max(abs(negPos.front()), abs(posPos.back()));
    cout << dis;
	return 0;
}