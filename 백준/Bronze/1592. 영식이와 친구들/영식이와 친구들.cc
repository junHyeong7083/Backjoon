#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n, m, l;
	cin >> n >> m >> l;
	vector<int> v(n);
	v[0] = 1;
	int curindex = 0, cnt = 0;
	while (v[curindex] != m)
	{
		if (v[curindex] % 2 == 0)
		{
			curindex = (curindex - l + n) % n;
			// 짝수
		}
		else if (v[curindex] % 2 == 1)
		{
			curindex = (curindex + l) % n;
		}
		v[curindex]++;
		cnt++;
	}
	cout << cnt;
	return 0;
}