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
    큐의 크기 n
    뽑아내려는 수의 개수 m
    m은 n이하인 자연수

    m개의 숫자
    연산의 최소값
    */
    int n, m;
    cin >> n >> m;

    deque<int> dq;
    for (int e = 1; e <= n; ++e)
        dq.push_back(e);

    int res = 0;
    int idx = 0;
    while (m--) {
        int x;
        cin >> x;

        for (int i = 0; i < dq.size(); i++) {
            if (dq[i] == x) {
                idx = i;
                break;
            }
        }

        // 앞에서부터
        if (idx <= dq.size() / 2) {
            while (1) {
                if (dq.front() == x) {
                    dq.pop_front();
                    break;
                }
                ++res;
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
        else { // 뒤에서부터
            while (1) {
                if (dq.front() == x) {
                    dq.pop_front();
                    break;
                }
                ++res;
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }

    cout << res;

    return 0;
}