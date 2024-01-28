#include <string>
#include <vector>
#include <algorithm>
#include<cmath>
#include<iostream>
using namespace std;

#pragma region Dir
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };
const int vectorTwo = 4;

int diagonalDx[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int diagonalDy[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };
const int vectorThree = 8;
#pragma endregion
const int MAXN = 25;
int map[MAXN][MAXN] = { 0 };
bool visiited[MAXN][MAXN] = { false };
int cnt = 0;
vector<int> v;


void DFS(int y, int x)
{
	if (visiited[y][x])
		return;
	visiited[y][x] = true;

	cnt++;

	for (int e = 0; e < 4; e++)
	{
		int nx = x + dx[e];
		int ny = y + dy[e];

		if (nx <0 || ny < 0 || nx >= MAXN || ny >= MAXN)
			continue;
		if (!visiited[ny][nx] && map[ny][nx] == 1)
			DFS(ny, nx);
		
	}
}




int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	std::cout.tie(NULL);
	
	int n;
	cin >> n;
	for (int y = 0; y < n; ++y)
	{
		string str;
		cin >> str;
		for (int x = 0; x < str.size(); ++x)
		{
			map[y][x] = str[x] -'0';
		}
	}

	int check = 0;
	for (int e = 0; e < n; ++e)
	{
		for (int q = 0; q < n; ++q)
		{
			if (!visiited[e][q] && map[e][q] == 1)
			{
				DFS(e, q);
				v.push_back(cnt);
				cnt = 0;
				check++;
			}
		}
	}
	sort(v.begin(), v.end());
	std::cout << check << "\n";
	for (int e = 0; e < v.size(); ++e)
		std::cout << v[e] << "\n";


	return 0;
}