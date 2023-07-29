#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(NULL);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        float sum = 0;
        for (int i = 0; i < n; ++i)
        {
            int score;
            cin >> score;
            arr[i] = score;
            sum += score;
        }
        float average = sum / n;
        double cnt = 0;
        for (int e = 0; e < arr.size(); ++e)
        {
            if (average < arr[e])
                cnt++;
        }
        double result = (cnt / arr.size()) * 100;

        cout << fixed; // 소수점 자리 고정
        cout.precision(3); // 소수점 3자리까지 출력
        cout << result << "%" << endl;
    }
    return 0;
}
