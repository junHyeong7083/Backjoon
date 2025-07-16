#include <iostream>
#include <deque>
using namespace std;

int arr[11][11];       // 겨울에 추가할 양분
int nutrient[11][11];  // 현재 땅의 양분
deque<int> trees[11][11]; // 각 칸의 나무들 (나이순)

int dx[8] = { -1, -1, -1,  0, 0, 1, 1, 1 };
int dy[8] = { -1,  0,  1, -1, 1,-1, 0, 1 };

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m, k;
    cin >> n >> m >> k;

    // 겨울에 추가될 양분 배열과 초기 양분 설정
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j) {
            cin >> arr[i][j];
            nutrient[i][j] = 5;
        }

    // 나무 정보 입력
    for (int i = 0; i < m; ++i) {
        int x, y, z;
        cin >> x >> y >> z;
        trees[x][y].push_back(z);
    }

    // k년 동안 시뮬레이션
    while (k--) {
        // 1. 봄 + 여름
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (trees[i][j].empty()) continue;

                deque<int> new_tree;
                int dead_nutrient = 0;

                // 나이순 정렬 보장: 항상 push_front로 추가함
                for (int t = 0; t < trees[i][j].size(); ++t) {
                    int age = trees[i][j][t];
                    if (nutrient[i][j] >= age) {
                        nutrient[i][j] -= age;
                        new_tree.push_back(age + 1);
                    }
                    else {
                        dead_nutrient += age / 2;
                    }
                }

                nutrient[i][j] += dead_nutrient;
                trees[i][j] = new_tree;
            }
        }

        // 2. 가을
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                for (int age : trees[i][j]) {
                    if (age % 5 != 0) continue;
                    for (int d = 0; d < 8; ++d) {
                        int ni = i + dx[d];
                        int nj = j + dy[d];
                        if (ni >= 1 && ni <= n && nj >= 1 && nj <= n) {
                            trees[ni][nj].push_front(1); // 앞에 삽입 (봄 우선순위 위해)
                        }
                    }
                }
            }
        }

        // 3. 겨울
        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= n; ++j)
                nutrient[i][j] += arr[i][j];
    }

    // 살아남은 나무 수 세기
    int total = 0;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            total += trees[i][j].size();

    cout << total;
    return 0;
}
