#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N, S;
vector<int>v;
int cnt = 0;
void Resur(int n, int sum)
{
    if (n == N)
        return;
    if (sum + v[n] == S)
        cnt++;

    Resur(n + 1, sum + v[n]);
    Resur(n + 1, sum);

}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> S;
    for (int e = 0; e < N; ++e)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    Resur(0, 0);
    cout << cnt;

    return 0;
}
