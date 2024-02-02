#include<iostream>
#include<string>
#include<stack>
#include<vector>
#include<algorithm>
#include<queue>
#include<cmath>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    /*
    n^3의 정육면체
      D
    E A B F
      C
    보이는 5개의 면의 합이 최소값이 되도록

    젤 큰값이 바닥에 가도록
    i) n = 1;
    5개의 면

    ii) n >= 2
    3면 : 맨위 4개
    2면 : (n-2)*4 +(n-1)*4
    1면 : (n-2)^2 , (n-1*n-2)*4
    */
    long long n;
    cin >> n;


    vector<int>v(6);
    int maxv = 0;
    int sum = 0;
    for (int e = 0; e < 6; ++e)
    {
        cin >> v[e];
        maxv = max(maxv, v[e]);
        sum += v[e];
    }
    if (n == 1)
    {
        cout << sum - maxv;

        return 0;
    }



    int m1 = 1000000, m2 = 1000000, m3 = 1000000;
    for (int e = 0; e < 6; ++e)
    {
        m1 = min(m1, v[e]);
        for (int w = e + 1; w < 6; ++w)
        {
            if (e + w == 5)
                continue;
            m2 = min(v[e] + v[w], m2);
            for (int q = w + 1; q < 6; ++q)
            {
                if (e + q == 5 || q + w == 5)
                    continue;
                m3 = min(v[e] + v[w] + v[q], m3);
            }
        }
    }

    long long three = m3* 4;
    long long two = (8*n-12) * m2;
    long long one = ((5*n-6)*(n-2)) * m1;

    cout << one + two + three;

    return 0;
}