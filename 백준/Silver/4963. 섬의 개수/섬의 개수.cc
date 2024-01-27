#include <string>
#include <vector>
#include <algorithm>
#include<cmath>
#include<iostream>
using namespace std;
const int vector2 = 4;

#pragma region Dir
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };
const int vectorTwo = 4;

int diagonalDx[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int diagonalDy[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };
const int vectorThree = 8;
#pragma endregion

int W, H;
const int maxv = 50;
int map[maxv][maxv] = { 0 };
int visitited[maxv][maxv] = { false };
void dfs(int y, int x) {
	if (visitited[y][x]) return;
	visitited[y][x] = true;
	for (int i = 0; i < vectorThree; i++) {
		int nx = x + diagonalDx[i];
		int ny = y + diagonalDy[i];
		if (nx < 0 || ny < 0 || nx >= W || ny >= H)continue;
		if (map[ny][nx] == 1 && !visitited[ny][nx])
			dfs(ny, nx);
	}
}


void Reset(int x, int y)
{
	for (int e = 0; e < y; ++e)
	{
		for (int q = 0; q < x; ++q)
		{
			map[e][q] = 0;
			visitited[e][q] = false;
		}
	}
}



int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	while (true)
	{
		// h : 세로 / w : 가로
		cin >> W >> H;

		// 초기화
		Reset(W, H);

		// 종료조건
		if (W == 0 && H == 0)
			break;
		
		// 값 입력
		for (int e = 0; e < H; ++e)
		{
			for (int q = 0; q < W; ++q)
			{
				cin >> map[e][q];
			}
		}

		int cnt = 0;
		for (int e = 0; e < H; ++e)
		{
			for (int q = 0; q < W; ++q)
			{
				if (!visitited[e][q] && map[e][q] == 1)
				{
					dfs(e, q);
					cnt++;
				}
			}
		}

		cout << cnt << endl;
	}
	
}