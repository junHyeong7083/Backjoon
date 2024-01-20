#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<utility>
using namespace std;

string en = "\n";
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    std::cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<int> v1(N);
    vector<string>v2(N);
    for (int i = 0; i < N; ++i) {
        cin >> v2[i] >> v1[i];
    }

    for (int i = 0; i < M; ++i) 
    {
        int power;
        cin >> power;
        
        int check = lower_bound(v1.begin(), v1.end(), power) - v1.begin();

        cout << v2[check] << "\n";
    }

    return 0;
}
