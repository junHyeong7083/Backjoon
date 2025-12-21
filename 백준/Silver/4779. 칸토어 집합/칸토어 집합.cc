#include<iostream>
#include<string>
#include <cmath>
using namespace std;

void Cantor(string& str, int start, int len)
{
	if (len == 1) return;

	int third = len / 3;

	// 가운데 부분 공백
	for (int e = start + third; e < start + 2 * third; ++e)
		str[e] = ' ';

	// 왼, 오 재귀
	Cantor(str, start, third);
	Cantor(str, start + 2 * third, third);
}

int main()
{
	/*

	3^n 개수
	2. 문자열 3등분 -> 가운데 공백
	*/
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	while (cin >> n)
	{
		int len = 1;
		for (int e = 0; e < n; ++e)
		{
			len *= 3;
		}
		string s(len, '-');
		Cantor(s, 0, len);

		cout << s << "\n";
	}
	return 0;
}