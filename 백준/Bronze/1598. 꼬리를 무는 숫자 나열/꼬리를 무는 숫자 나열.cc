#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int x, y;
	cin >> x >> y;
	int a, b, c, d;
	a = (x - 1) / 4;
	b = (y - 1) / 4;

	c = (x - 1) % 4;
	d = (y - 1) % 4;
	cout << abs(a - b) + abs(c - d);

	return 0;
}