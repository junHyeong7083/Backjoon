#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	/*
	기타 N개줄
	기타줄의 개수 N, 브랜드 M
	패키지 가격(6개), 낱개 가격


	*/
	int n, m;
	cin >> n >> m;
	int pp = 100000, sin = 100000;
	for (int e = 0; e < m; ++e)
	{
		int a, b;
		cin >> a >> b;
		pp = min(pp, a);
		sin = min(sin, b);
	}
	int res = 100000;
	int min1 = ((n / 6) + 1) * pp;
	int min2 = sin * n;
	int min3 = (n / 6)  * pp + (n % 6) * sin;

	res = min(min1, min(min2, min3));
	cout << res;
	return 0;
}