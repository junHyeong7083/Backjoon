#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

// 나라별 메달수는최대 2개

int n;
priority_queue<tuple<int, int, int>> pq;
int countryCount[101];

void bootstrap()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void Solve()
{
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int country, student, score;
        cin >> country >> student >> score;
        pq.push(make_tuple(score, country, student));
    }

    int selected = 0;

    while (!pq.empty() && selected < 3)
    {
        tuple<int, int, int> cur = pq.top();
        pq.pop();

        int score = get<0>(cur);
        int country = get<1>(cur);
        int student = get<2>(cur);

        // 한나라에서 메달2개받으면 무시
        if (countryCount[country] >= 2)
            continue;

        countryCount[country]++;
        cout << country << ' ' << student << '\n';
        selected++;
    }
}

int main()
{
    bootstrap();
    Solve();
    return 0;
}