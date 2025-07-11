#include <iostream>
#include <cmath>
using namespace std;

int map[1001][1001];

int main()
{
	int n;
	cin >> n;

	pair<int, int> p1, p2;
	for (int e = 0; e < n;++e)
	{
		for (int w = 0; w < n; ++w) 
		{
			cin >> map[e][w];
			if (map[e][w] == 5) p1 = { e, w };  // 교수님
			else if (map[e][w] == 2) p2 = { e, w };  // 성규
		}
	}

	int dx = p1.first - p2.first;
	int dy = p1.second - p2.second;
	int dist2 = dx * dx + dy * dy;

	if (dist2 < 25) 
	{
		cout << 0;
		return 0;
	}

	if (p1.first == p2.first) 
	{
		int cnt = 0;
		int y1 = min(p1.second, p2.second);
		int y2 = max(p1.second, p2.second);
		for (int i = y1; i <= y2; ++i)
			if (map[p1.first][i] == 1) cnt++;
		cout << (cnt >= 3 ? 1 : 0);
		return 0;
	}

	if (p1.second == p2.second) 
	{
		int cnt = 0;
		int x1 = min(p1.first, p2.first);
		int x2 = max(p1.first, p2.first);
		for (int i = x1; i <= x2; ++i)
			if (map[i][p1.second] == 1) cnt++;
		cout << (cnt >= 3 ? 1 : 0);
		return 0;
	}

	// 직사각형 내부
	int cnt = 0;
	int x1 = min(p1.first, p2.first);
	int x2 = max(p1.first, p2.first);
	int y1 = min(p1.second, p2.second);
	int y2 = max(p1.second, p2.second);
	for (int i = x1; i <= x2; ++i)
	{
		for (int j = y1; j <= y2; ++j) 
			if (map[i][j] == 1) cnt++;
	}

	cout << (cnt >= 3 ? 1 : 0);
}
