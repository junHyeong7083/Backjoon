#include<iostream>
#include<string>
#include<math.h>
#include<vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	int maxX = -100000, maxY = -100000;
	int minX = 100000, minY = 100000;

	for (int e = 0; e < n; ++e)
	{
		int  x, y;
		cin >> x >> y;
		maxX = max(maxX, x);
		minX = min(minX, x);

		maxY = max(maxY, y);
		minY = min(minY, y);
	}


		cout << (maxX - minX) * (maxY - minY);
	

	return 0;
}