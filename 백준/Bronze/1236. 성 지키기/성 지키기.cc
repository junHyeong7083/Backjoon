#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
char map[51][51];
int main()
{
	ios::sync_with_stdio(0);;
	cin.tie(NULL);
	cout.tie(NULL);

	/*
	세로 n 가로 m
	*/
	int n, m;
	cin >> n >> m;

	for (int e = 0; e < n; ++e)
	{
		for (int w = 0; w < m; ++w)
		{
			cin >> map[e][w];
		}
	}

	int checkR = 0;
	for (int i = 0; i < n; ++i)
	{
		bool row = false;
		for (int j = 0; j < m; ++j)
		{
			if (map[i][j] == 'X')
			{
				row = true;
				break;
			}
		}
		if (!row)
			checkR++;
	}
	
	int checkC = 0;
	for (int i = 0; i < m; ++i)
	{
		bool col = false;
		for (int j = 0; j < n; ++j)
		{
			if (map[j][i] == 'X')
			{
				col = true;
				break;
			}
		}
		if (!col)
			checkC++;
	}
	int ans = max(checkC, checkR);
	cout << ans;

	return 0;
}