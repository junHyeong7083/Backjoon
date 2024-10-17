#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

int n, m;
int map[301][301];
int temp[301][301];
bool visited[301][301];

int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

void BFS(int y, int x) {
    queue<pair<int, int>> qu;
    qu.push({ y, x });
    visited[y][x] = true;

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
            }
        }
    }
}

void melt() {
    memcpy(temp, map, sizeof(map));  
    for (int y = 0; y < n; y++) {
        for (int x = 0; x < m; x++) {
            if (map[y][x] > 0) {
                int seaCnt = 0; 
                for (int i = 0; i < 4; i++) {
                    int ny = y + dy[i];
                    int nx = x + dx[i];
                    if (ny >= 0 && ny < n && nx >= 0 && nx < m && map[ny][nx] == 0) {
                        seaCnt++;
                    }
                }
                temp[y][x] = max(0, map[y][x] - seaCnt);  // 녹음
            }
        }
    }
    memcpy(map, temp, sizeof(map));  
}

int countIcebergs() {
    memset(visited, false, sizeof(visited));
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

    int year = 0;
    while (true) {
        int icebergs = countIcebergs();  

        if (icebergs >= 2) {  
            cout << year << endl;
            break;
        }
        if (icebergs == 0) { 
            cout << 0 << endl;
            break;
        }

        melt();
        year++;
    }

    return 0;
}
