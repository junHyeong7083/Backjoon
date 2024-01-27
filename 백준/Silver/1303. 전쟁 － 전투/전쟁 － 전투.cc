#include <string>
#include <vector>
#include <algorithm>
#include<cmath>
#include<iostream>
using namespace std;
int N, M, W, B;
char map[100][100];
int visit[100][100];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int tmp;

void dfs(int x, int y) {
	if (visit[x][y]) return;
	tmp++;
	visit[x][y] = 1;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 0 && nx < M && ny >= 0 && ny < N && !visit[nx][ny] && map[nx][ny] == map[x][y]) {
			dfs(nx, ny);
		}
	}
}

int main() {
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
		}
	}
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (!visit[i][j]) {
				tmp = 0;
				dfs(i, j);
				if (map[i][j] == 'W') W += tmp * tmp;
				else B += tmp * tmp;
			}
		}
	}
	cout << W << " " << B << endl;
}