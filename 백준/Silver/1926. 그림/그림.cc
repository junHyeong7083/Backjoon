#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

int n, m;
int map[501][501];
bool visited[501][501];

int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

int maxRes = 0;
void BFS(int y, int x) {
    queue<pair<int, int>> qu;
    qu.push({ y, x });
    visited[y][x] = true;
    int check = 1;
    while (!qu.empty()) {
        int cy = qu.front().first;
        int cx = qu.front().second;
        qu.pop();

        for (int i = 0; i < 4; i++) {
            int ny = cy + dy[i];
            int nx = cx + dx[i];

            if (ny >= 0 && ny < n && nx >= 0 && nx < m && !visited[ny][nx] && map[ny][nx] > 0) {
                visited[ny][nx] = true;
                qu.push({ ny, nx });
                check++;
            }
        }
    }
    maxRes = max(maxRes, check);
}


int Cnt() {
    int count = 0;

    for (int y = 0; y < n; y++) {
        for (int x = 0; x < m; x++) {
            if (map[y][x] > 0 && !visited[y][x]) {
                BFS(y, x);
                count++;
            }
        }
    }

    return count;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> map[i][j];
        }
    }

    cout << Cnt() << "\n" << maxRes;

    return 0;
}
